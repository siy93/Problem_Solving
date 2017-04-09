#include<iostream>
using namespace std;

long long DP[31][31];

int main()
{
	int T;
	int N, M;

	for (int i = 0; i <= 30; i++) {
		for (int j = 0; j <= 30; j++) {
			if (j == 0 || j == i)
				DP[i][j] = 1;
			else
				DP[i][j] = DP[i - 1][j - 1] + DP[i - 1][j];
		}
	}

	for (cin >> T; T--;) {
		cin >> N >> M;
		cout << DP[M][N] << endl;
	}
	return 0;
}
