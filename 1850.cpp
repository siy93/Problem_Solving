#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){return b? gcd(b,a%b):a;}
ll a,b;

int main()
{
    cin>>a>>b;
    for(ll i=0;i<gcd(a,b);i++){
        cout<<1;
    }
    return 0;
}
