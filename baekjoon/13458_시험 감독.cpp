#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> rooms;
int primary,  secondary;
long long res = 0;
// 자료형 문제였음

int main() {
	cin >> n;
	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		rooms.push_back(input);
	}
	cin >> primary >> secondary;

	for (int i = 0; i < n; i++) {
		res++;
		rooms[i] -= primary;
	}

	for (int i = 0; i < n; i++) {
		if (rooms[i] < 0) continue;
		res += rooms[i] / secondary;
		if (rooms[i]%secondary != 0) res++;
	}
	cout << res;
	return 0;
}