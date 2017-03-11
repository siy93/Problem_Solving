#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
    int N,count=0;
    int ans;
    int ten,one,temp;
    cin>>N;
    temp = N;
    while(1){
        count++;
        ten = temp/10;
        one = temp%10;
        if(ten + one < 10){
            temp = ten + one + one * 10;
        }
        else{
            temp = (ten + one)%10 + one*10;
        }
        if(temp == N){break;}
    }
    cout<<count;
    return 0;
}
