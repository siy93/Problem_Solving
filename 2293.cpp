#include<iostream>

using namespace std;
int coins[101];
int sum[10001];

int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> coins[i];
	}

	sum[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j + coins[i] <= k; j++) {
			sum[j+coins[i]] += sum[j];
		}
	}
	cout << sum[k];
	return 0;
}
