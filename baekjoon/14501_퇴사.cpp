#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> days;
vector<int> value;
int memo[16];

int dp(int idx) {
	if (idx == n) return 0;
	if (idx > n) return -1000;
	if (memo[idx] != -1) return memo[idx];
	int none = dp(idx + 1);
	int done = dp(idx + days[idx]);

	int res = max(none, done + value[idx]);
	memo[idx] = res;
	return res;
}

int main() {
	fill_n(memo, 16, -1);
	cin >> n;
	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		days.push_back(input);
		cin >> input;
		value.push_back(input);
	}

	cout << dp(0);
	return 0;
}