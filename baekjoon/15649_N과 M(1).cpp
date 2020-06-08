#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> num;
vector<bool> check;

void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << num[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++) {
		if (!check[i]) {
			check[i] = true;
			num[cnt] = i+1;
			dfs(cnt + 1);
			check[i] = false;
		}
	}
}
int main(){
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		check.push_back(false);
	}
	for (int i = 0; i < m; i++) {
		num.push_back(0);
	}
	dfs(0);
	return 0;
}
