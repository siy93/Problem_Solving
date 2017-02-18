#include<iostream>
#include<algorithm>
#define R 0
#define G 1
#define B 2
using namespace std;
int N;
int cost[1000][3] = { 0 }, total[1000][3] = { 0 };
int paint(int n, int color);
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> cost[i][R];
		cin >> cost[i][G];
		cin >> cost[i][B];
	}
	cout << min(min(paint(0, R), paint(0, G)), paint(0, B));
}

int paint(int n,int color) {
	if (n == N) { return 0; }

	if (total[n][color] != 0) { return total[n][color]; }
	if (color == R) {
		return total[n][R] = min(paint(n + 1, color + 1), paint(n + 1, color + 2)) + cost[n][color];
	}
	else if (color == G) {
		return total[n][G] = min(paint(n + 1, color - 1), paint(n + 1, color + 1)) + cost[n][color];
	}
	else {
		return total[n][B] = min(paint(n + 1, color - 2), paint(n + 1, color - 1)) + cost[n][color];
	}
}
