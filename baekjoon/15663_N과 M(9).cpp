#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n, m;
int arr[9];
int selected[9];
int new_arr[9];



void dfs(int cnt) {
	bool used[10001] = { false, };

	if (cnt == m) {
		for (int i = 0; i<m; i++) {
			cout << new_arr[i] << " ";
		}
		cout << "\n";
		return;
	}


	for (int i = 0; i<n; i++) {
		if (!selected[i] && !used[arr[i]]) {
			selected[i] = true;
			new_arr[cnt++] = arr[i];
			used[arr[i]] = true;
			dfs(cnt);
			cnt--;
			selected[i] = false;
		}
	}

}

int main() {
	cin >> n >> m;

	for (int i = 0; i<n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	dfs(0);

	return 0;
}