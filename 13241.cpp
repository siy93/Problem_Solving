#include<iostream>
using namespace std;
typedef long long ll;

ll gcd(int a, int b) { return !b ? a : gcd(b, a%b); }

int main()
{
	ll a, b;

    cin >> a >> b;
    a>b ? cout<<(a*b) / gcd(a, b) : cout<<(a*b) / gcd(b, a);;
    cout<<endl;

	return 0;
}
