#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--) {
		int dp[100001] = { 0, };
		int house[100001] = { 0 , };
		int count = 0;

		int N, M, K;
		cin >> N >> M >> K;

		for (int i = 0; i < N; i++) { cin >> house[i]; }
		
		for (int i = 0; i < M; i++) {
			dp[0] += house[i];
		}
		for (int i = 1; i < N - M + 1; i++) {
			dp[i] = dp[i - 1] - house[i - 1] + house[i - 1 + M];
		}
		if (N != M) {
			for (int i = N - M + 1; i < N; i++) {
				dp[i] = dp[i - 1] - house[i - 1] + house[i + M - N - 1];
			}
		}
		for (int i = 0; i < N; i++) {
			if (dp[i] < K && dp[i] != 0) { count++; }
		}
	
		cout << count << endl;
	}

	return 0;
}
