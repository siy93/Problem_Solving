#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <memory.h>

using namespace std;

int arr[701][701];
int temp[1500];

int main()
{
    int M, N;
    scanf("%d %d",&M, &N);

    int zero, one, two, cursor = 0;

    for(int i=0; i<N; i++){
        scanf("%d %d %d",&zero ,&one, &two);
        
        for(int j=zero; j<zero+one+two; j++)
            temp[j]++;
        for(int j=zero+one; j<zero+one+two; j++)
            temp[j]++;
    }
    
    for(int j=M-1; j>=0; j--)
        arr[j][0] += temp[cursor++];
        
    for(int j=1; j<M; j++)
        arr[0][j] += temp[cursor++];
    
    for(int i=0; i<M; i++){
        for(int j=0; j<M; j++){
            if(j == 0 || i == 0)
                printf("%d ",arr[i][j] + 1);
            else
                printf("%d ",arr[0][j] + 1);
        }
        printf("\n");
    }
    
    return 0;
}
