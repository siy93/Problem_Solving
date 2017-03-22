#include<iostream>
#include<cmath>

using namespace std;
typedef long long int ll;

int check[1000001];

int main() 
{
	ll min, max,checkNum;	
	cin >> min >> max;
	ll ans = 0;
	for (ll i = 2; i * i <= max ; i++)
	{
		checkNum = min / (i * i);

		if (min % (i*i) != 0) checkNum++;

		while(checkNum*(i*i) <= max){
			check[checkNum*(i*i) - min] = 1;
			checkNum++;
		}
	}
	for (int i = 0; i <= max - min; i++) {
		if (check[i] == 0) ans++;
	}
	cout << ans;
	return 0; 
}
