#include<iostream>
#include<algorithm>

using namespace std;
typedef long long ll;

ll num[10];
ll temp[10];

int main()
{
	int N;
	ll ans;
	cin >> N;

	for (int i = 1; i <= 9; i++) { num[i] = 1; }
	ans = 0;

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0) {
				temp[1] += (1*num[j]) % 1000000000;
			}
			else if (j == 9) {
				temp[8] += (1 * num[j]) % 1000000000;
			}
			else {
				temp[j - 1] += (1 * num[j]) % 1000000000;
				temp[j + 1] += (1 * num[j]) % 1000000000;
			}
		}
		for (int j = 0; j <= 9; j++) {
			num[j] = temp[j];
			temp[j] = 0;
		}
	}

	for (int i = 0; i <= 9; i++) {
		ans += num[i] % 1000000000;
	}

	cout << ans % 1000000000;
	return 0;
}
