#include<iostream>
using namespace std;
long long P[101];
int T;
int main()
{
	for (cin >> T; T--;) {
		int N;
		P[0] = P[1] = P[2] = 1;
		cin >> N;
		for (int i = 3; i < N; i++) {
			P[i] = P[i - 3] + P[i - 2];
		}
		cout << P[N - 1]<<endl;
	}
	return 0;
}
