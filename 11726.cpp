#include<iostream>
using namespace std;

long long DP[1001];

int main()
{
	int N;
	DP[1] = 1,DP[2] = 2;
	cin >> N;
	for (int i = 3; i <= N; i++) {
		DP[i] = (DP[i - 1] + DP[i - 2])%10007;
	}
	cout << DP[N];
	return 0;
}
