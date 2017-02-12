#include<iostream>
#include<algorithm>
#define MAX 101

using namespace std;
int N, K, binoCoeff[MAX][MAX];
int main() {
	cin >> N >> K;
	for (int i = 1; i <= N + 1; i++) {
		for (int j = 1; j <= min(i, K + 1); j++) {
			if (j == 1 || j == i){
				binoCoeff[i][j] = 1;
			}
			else {
				binoCoeff[i][j] = (binoCoeff[i - 1][j - 1] + binoCoeff[i - 1][j]);
			}
		}
	}
	cout << binoCoeff[N + 1][K + 1];
	return 0;
}
