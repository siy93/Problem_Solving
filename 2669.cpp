#include <iostream>

using namespace std;

int arr[101][101];

int main()
{
    int a,b,c,d;
    int answer = 0;
    
    for(int i=0;i<4;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        
        for(int j=a;j<c;j++){
            for(int k=b;k<d;k++){
                arr[j][k] = 1;
            }
        }
    }
    
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            answer += arr[i][j];
        }
    }
    
    printf("%d",answer);
    return 0;
}
