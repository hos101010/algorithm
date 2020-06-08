#include<iostream>
#include<vector>
using namespace std;

vector<int> num;
int n, m;

void dfs(int cnt, int idx) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << num[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = idx; i < n; i++) {
			num[cnt] = i+1;
			dfs(cnt + 1, i);
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		num.push_back(0);
	}
	dfs(0,0);
	return 0;
}