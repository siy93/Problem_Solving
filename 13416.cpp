#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int T, N;
	cin >> T;
	while (T--) {
		cin >> N;
		long long sum = 0;
		int a, b, c;

		for (int i = 0; i < N; i++) {
			cin >> a >> b >> c;
			if(!(a < 0 && b < 0 && c < 0))
				sum += max(a, max(b, c));
		}
		cout << sum << endl;
	}

	return 0;
}
