#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> wheels;
bool same[3];
int n;

void move(int direction, int idx) {
	char tmp;
	switch(direction) {
		case 1:	//시계방향
			tmp = wheels[idx][7];
			for (int i = 7; i > 0; i--) {
				wheels[idx][i] = wheels[idx][i - 1];
			}
			wheels[idx][0] = tmp;
			break;

		case -1:	//반시계방향
			tmp = wheels[idx][0];
			for (int i = 0; i < 7; i++) {
				wheels[idx][i] = wheels[idx][i + 1];
			}
			wheels[idx][7] = tmp;
			break;
	}
}

void checkSame() {
	for (int i = 0; i < 3; i++) {
		if (wheels[i][2] == wheels[i + 1][6])	same[i] = true;
		else same[i] = false;
	}
}

int main() {
	char input;
	for (int i = 0; i < 4; i++) {
		vector<char> wheel;
		for (int j = 0; j < 8; j++) {
			cin >> input;
			wheel.push_back(input);
		}
		wheels.push_back(wheel);
	}
	cin >> n;

	int idx;
	int direction;
	for (int i = 0; i < n; i++) {
		cin >> idx;
		cin >> direction;
		idx -= 1;

		checkSame();
		move(direction, idx);

		int dir2 = direction;
		for (int j = idx+1; j < 4; j++) {
			if (same[j-1])	break;
			dir2 = -dir2;
			move(dir2, j);
		}
		for (int j = idx - 1; j >= 0; j--) {
			if (same[j])	break;
			direction = -direction;
			move(direction, j);
		}
	}

	int res = 0;
	if (wheels[0][0] == '1')	res += 1;
	if (wheels[1][0] == '1')	res += 2;
	if (wheels[2][0] == '1')	res += 4;
	if (wheels[3][0] == '1')	res += 8;

	cout << res;
	return 0;
}