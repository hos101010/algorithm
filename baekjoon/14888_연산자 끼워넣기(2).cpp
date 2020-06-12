#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int n;
vector<int> num;
vector<int> expr;
int maxi = INT_MIN;
int mini = INT_MAX;
// 0:+	1:-	 2:x	3:/

int main() {
	cin >> n;
	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		num.push_back(input);
	}

	for (int i = 0; i < 4; i++) {
		cin >> input;
		for (int j = 0; j < input; j++) {
			expr.push_back(i);
		}
	}
	sort(expr.begin(), expr.end());

	do {
		int res = num[0];
		for (int i = 0; i < n-1; i++) {
			switch(expr[i]){
			case 0:
				res += num[i + 1];
				break;
			case 1:
				res -= num[i + 1];
				break;
			case 2:
				res *= num[i + 1];
				break;
			case 3:
				if (num[i + 1] == 0) break;
				res /= num[i + 1];
				break;
			}
		}
		mini = min(mini, res);
		maxi = max(maxi, res);
	} while (next_permutation(expr.begin(), expr.end()));

	cout << maxi << "\n" << mini << "\n";
	return 0;
}