#include<iostream>
#include<algorithm>
using namespace std;

char N[11];

int main()
{
	cin >> N;
	sort(N, N + 11);
	for (int i = 11; i >= 0; i--){
		if (N[i]){
			cout << N[i];
		}
	}
	return 0;
}
