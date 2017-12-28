#include<iostream>
using namespace std;
typedef long long ll;

ll dp[81];
ll dp2[81];

void solution(int N){
    dp[0] = 1, dp[1] = 1;
    dp2[0] = 4; 
    for(int i=2;i<=N;i++){
        dp[i] = dp[i-1] + dp[i-2];
        dp2[i-1] = dp[i] * 2 + dp[i-1] * 2;
    }
    
    cout<<dp2[N-1];
}

int main()
{
    int N;
    cin >> N;
    solution(N);
    return 0;
}
