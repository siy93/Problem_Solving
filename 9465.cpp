#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int T;

int main()
{
	for (cin >> T; T--;) {
		int n, num;
		vector<vector <int> > v;
		vector<vector <int> > DP;

		v.resize(2);
		DP.resize(2);
		cin >> n;

		for (int i = 0; i < 2; i++) {
			v[i].resize(n);
			DP[i].resize(n);
			for (int j = 0; j < n; j++) {
				cin >> num;
				v[i][j] = num;
			}
		}

		DP[0][0] = v[0][0], DP[1][0] = v[1][0];
		DP[0][1] = v[0][1] + DP[1][0], DP[1][1] = v[1][1] + DP[0][0];


		for (int i = 2; i < n; i++) {
			DP[0][i] = max(DP[1][i - 1], DP[1][i - 2]) + v[0][i];
			DP[1][i] = max(DP[0][i - 1], DP[0][i - 2]) + v[1][i];
		}

		cout << max(DP[0][n - 1], DP[1][n - 1]) << endl;

	}
	
	return 0;
}
