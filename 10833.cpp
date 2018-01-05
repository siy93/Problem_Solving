#include <stdio.h>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    
    int studentNum, appleNum;
    int answer = 0;
    
    for(int i=0;i<N;i++){
        scanf("%d %d", &studentNum, &appleNum);
        answer += (appleNum % studentNum);
    }
    
    printf("%d",answer);
    return 0;
}
