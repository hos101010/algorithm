#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int n;
vector<vector<int>> num;
int start;
int link;
int diff = -1;

int main() {
	int input;
	vector<int> idx;
	cin >> n;
	for (int i = 0; i < n; i++) {
		vector<int> line;
		for (int j = 0; j < n; j++) {
			cin >> input;
			line.push_back(input);
		}
		num.push_back(line);
	}

	for (int i = 0; i < n; i++) {
		if (i < n / 2)	idx.push_back(1);
		else idx.push_back(0);
	}
	sort(idx.begin(), idx.end());

	do {
		start = 0;
		link = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				if (idx[i] == 1 && idx[j] == 1) {
					start += num[i][j] + num[j][i];
				}
				if (idx[i] == 0 && idx[j] == 0) {
					link += num[i][j] + num[j][i];
				}
			}
		}
		if (diff == -1) diff = abs(start - link);
		else diff = min(abs(start - link), diff);
	} while (next_permutation(idx.begin(), idx.end()));

	cout << diff;
	return 0;
}