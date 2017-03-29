#include<iostream>
#include<algorithm>
using namespace std;

int DP[100000];
int arr[100000];

int main()
{
	int N, ans;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> arr[i];
	}

	DP[0] = ans = arr[0];

	for (int i = 1; i < N; i++) {
		DP[i] = max(arr[i] + DP[i - 1], arr[i]);
		if (DP[i] > ans) { ans = DP[i]; }
	}
	cout << ans;
	
	return 0;
}
