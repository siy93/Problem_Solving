#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
    int N;
    char number;
    int sum=0;
    scanf("%d",&N);
    getchar();
    while(N--){
        number = getchar();
        sum+= number-48;
    }
    printf("%d",sum);
    return 0;
}
