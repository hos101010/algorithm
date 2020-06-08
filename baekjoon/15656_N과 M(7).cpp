#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> num;
vector<int> res;

void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << res[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++) {
		res[cnt] = num[i];
		dfs(cnt + 1);
	}
}

int main() {
	cin >> n >> m;
	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		num.push_back(input);
		res.push_back(0);
	}
	sort(num.begin(), num.end());
	dfs(0);
	return 0;
}