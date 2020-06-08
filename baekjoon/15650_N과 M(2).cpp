#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> num;
vector<int> check;
int n, m;

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		num.push_back(i + 1);
		if (i < m)	check.push_back(1);
		else        check.push_back(0);
	}

	do {
		for (int i = 0; i < n; i++) {
			if (check[i]==1) cout << num[i] << " ";
		}
		cout << "\n";
	} while (prev_permutation(check.begin(), check.end()));
	return 0;
}