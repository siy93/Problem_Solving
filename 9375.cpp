#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main() {
	int T, N;
	for (cin >> T; T--;) {
		int ans = 1;
		char a[21], b[21];
		map<string, int> m;
		map<string, int>::iterator it;
		for (cin >> N; N--;) {
			cin >> a >> b;
			m[b]++;
		}
		for (it = m.begin(); it != m.end(); it++)
			ans *= (1 + it->second);
		ans--;
		cout << ans << endl;;
	}
	return 0;
}
