#include<iostream>
using namespace std;

int T;
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int main()
{
    int A,B,G;
    int newA,newB;

    for(cin>>T;T--;){
        cin>>A>>B;
        while(A!=1){
            newB = B*(B/A+1);
            newA = A*(B/A+1)-B;
            G = gcd(newA,newB);
            newB /= G;
            newA /= G;
            B = newB;
            A = newA;
       }
       cout<<B<<endl;
    }
    return 0;
}
