#include<iostream>
#include<algorithm>
#define MAX 1001
#define MOD 10007
using namespace std;
int N, K, binoCoeff[MAX][MAX];
int main() {
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= min(i, K); j++) {
			if(j == 1 || j==i){
				binoCoeff[i][j] = 1;
			}
			else {
				binoCoeff[i][j] = (binoCoeff[i - 1][j - 1] + binoCoeff[i - 1][j]) % MOD;
			}
		}
	}
	cout << binoCoeff[N][K];
	return 0;
}

