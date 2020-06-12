#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
vector<int> num;
vector<int> res;
vector<bool> visited;

void dfs(int cnt) {
	vector<int> history;

	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << res[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++) {
		if (count(history.begin(), history.end(), num[i]) > 0) continue;
		if (visited[i]) continue;
		history.push_back(num[i]);
		visited[i] = true;
		res[cnt] = num[i];
		dfs(cnt + 1);
		visited[i] = false;
	}
}

int main() {
	cin >> n >> m;
	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		num.push_back(input);
		visited.push_back(false);
		if (i < m) res.push_back(0);
	}
	sort(num.begin(), num.end());

	dfs(0);

	return 0;
}