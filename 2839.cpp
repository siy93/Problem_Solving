#include<iostream>

#define INF 2000
using namespace std;


int main(void)
{
    int N;
    cin>>N;
    int C[5001];
    for(int i=1;i<=N;i++){
        if(i==1 || i == 2 || i == 4){
            C[i] = INF;
        }
        else if(i==3 || i==5){
            C[i] = 1;
        }
        else{
            if(C[i-3] <= C[i-5])
                C[i] = C[i-3]+1;
            else
                C[i] = C[i-5]+1;
        }
    }
    if(C[N]>=2000){cout<<-1;}
    else{cout<<C[N];}
    return 0;
}
