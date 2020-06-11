#include <iostream>
#include <algorithm>

using namespace std;
int n, m;
int arr[8];
int new_arr[8];

void dfs(int idx, int cnt) {
	int used[10001] = { false, };
	
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << new_arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = idx; i < n; i++) {
		if (!used[arr[i]]) {
			used[arr[i]] = true;
			new_arr[cnt++] = arr[i];
			dfs(i, cnt);
			cnt--;
		}
	}

}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);
	dfs(0, 0);

	return 0;
}