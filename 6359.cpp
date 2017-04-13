#include<iostream>
#include<cmath>
using namespace std;

int T;

int main()
{
    for(cin>>T;T--;)
    {
        int n,ans;
        cin >> n;
        ans = sqrt(n);
        cout<<ans<<endl;
    }
    return 0;
}
