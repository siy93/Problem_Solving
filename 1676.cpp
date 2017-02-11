#include<iostream>
using namespace std;
int N,ans=0;
int main() {
	cin >> N;
	if (N == 0) {}
	else {
		for (int i = 1; i <= N; i++) {
			if (i % 5 == 0) {
				ans++;
				int temp = i;
				for (;;) {
					temp = temp / 5;
					if (temp % 5 == 0) { ans++; }
					else { break; }
				}
			}
		}
	}
	cout << ans;
	return 0;
}

