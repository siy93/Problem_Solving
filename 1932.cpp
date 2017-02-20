#include<iostream>
#include<algorithm>
using namespace std;
int arr[500][500] = { 0 };
int N;

int main()
{
	cin >> N;
		
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) {
				arr[i][j] = arr[i][j] + arr[i - 1][j];
			}
			else if (i == j) {
				arr[i][j] = arr[i][j] + arr[i - 1][j - 1];
			}
			else {
				arr[i][j] = max(arr[i][j] + arr[i - 1][j - 1], arr[i][j] + arr[i - 1][j]);
			}
		}
	}

	int ans = arr[N-1][0];
	for (int i = 0; i < N; i++) {
		if (ans < arr[N-1][i]) {
			ans = arr[N-1][i];
		}
	}
		
	cout << ans;
	return 0;

}