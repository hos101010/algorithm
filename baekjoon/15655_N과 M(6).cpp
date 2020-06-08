#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
vector<int> num;
vector<int> idx;

int main() {
	cin >> n >> m;
	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		num.push_back(input);
		if (i < m)	idx.push_back(1);
		else        idx.push_back(0);
	}
	sort(num.begin(), num.end());

	do {
		for (int i = 0; i < n; i++) {
			if (idx[i])	cout << num[i] << " ";
		}
		cout << "\n";
	} while (prev_permutation(idx.begin(), idx.end()));
	return 0;
}