#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int M, s;
    int a, b, lcm;
    int rotateNum, rotateType; 
    
    scanf("%d", &M);
    
    scanf("%d %d %d",&a,&b,&s);
    b /= a, a /= a;
    rotateNum = b, rotateType = (0 ^ s);
    
    for(int i=0; i<M-1; i++){
        scanf("%d %d %d",&a,&b,&s);
        lcm = rotateNum / a;
        a *= lcm, b *= lcm;
        rotateNum = b, rotateType ^= s;
    }
    printf("%d %d",rotateType, rotateNum);
    return 0;
}
