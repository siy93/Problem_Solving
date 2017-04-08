#include<iostream>

using namespace std;

int main()
{
	int N;
	long long DP[91];
	cin >> N;
	DP[1] = 1, DP[2] = 1; //base case
	for (int i = 3; i <= N; i++){
		DP[i] = 1;
		for (int j = 1; j <= i - 2; j++){
			DP[i] += DP[j];
		}
	}
	cout << DP[N];
	return 0;
}
