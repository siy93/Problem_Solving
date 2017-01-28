#include<iostream>
using namespace std;
const int mod = 1000000;
const int pasano = mod / 10 * 15;
typedef long long ll;
int main(void){
	int F[pasano];
	ll num;
	F[0] = 0, F[1] = 1;
	cin >> num;
	for (int i = 2; i <= pasano; i++){
		F[i] = F[i - 1] + F[i - 2];
		F[i] %= mod;
	}
	cout << F[num%pasano];
	return 0;
}