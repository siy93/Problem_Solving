#include<iostream>

using namespace std;

int arr[12];

int main()
{
    int N, K;
    int S, Y;
    cin >> N >> K;
    for(int i=0; i<N; i++){
        cin >> S >> Y;
        arr[S + (2 * Y) - 2]++;
    }
    
    int answer = 0;
    for(int i=0; i< 12; i++){
        answer += (arr[i] / K);
        if(arr[i] % K > 0) answer++;
    }
    
    cout << answer;
    return 0;
}
