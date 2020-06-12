#include <iostream>

using namespace std;
int n;
int app[4], num[15];
int maximum, minimum;

void dfs(int depth, int res) {
	if (depth == n - 1) {

		if (maximum < res) maximum = res;
		if (minimum > res) minimum = res;
		return;
	}

	if (app[0] > 0) {
		app[0]--;
		dfs(depth + 1, res + num[depth + 1]);
		app[0]++;
	}
	if (app[1] > 0) {
		app[1]--;
		dfs(depth + 1, res - num[depth + 1]);
		app[1]++;
	}
	if (app[2] > 0) {
		app[2]--;
		dfs(depth + 1, res * num[depth + 1]);
		app[2]++;
	}
	if (app[3] > 0) {
		app[3]--;
		dfs(depth + 1, res / num[depth + 1]);
		app[3]++;
	}
}

int main() {
		maximum = -100000000;
		minimum = 100000000;
		//cout << "#" << t + 1 << " ";

		cin >> n;
		
		for (int i = 0; i < n; i++) {
			cin >> num[i];
		}
		for (int i = 0; i < 4; i++) {
			cin >> app[i];
		}

		dfs(0, num[0]);
		cout << maximum <<"\n" << minimum << "\n";
}