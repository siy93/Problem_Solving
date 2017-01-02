#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
    int N;
    char c;
    scanf("%d",&N);
    scanf("%c",&c);
    while(N){
        int count = 0,ans = 0;
        while(1){
            scanf("%c",&c);
            if(c == '\n'){break;}
            else if(c == 'O'){
                ans += ++count;
            }
            else{
                count = 0;
            }
        }
        printf("%d\n",ans);
        --N;
    }
    return 0;
}
