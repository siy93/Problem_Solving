#include<iostream>
using namespace std;

int main()
{
	int N, mul, ans = 0;
	cin >> N;
	for(int i=0;i<N-1;i++){
			cin >> mul;
			ans += mul-1;
	}
	cin >> mul;
	ans += mul;
	cout << ans;
	return 0;
}
