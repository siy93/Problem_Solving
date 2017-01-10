#include<cstdio>

int main(void)
{
	int testCase;
	int i,j,x;
	scanf("%d", &testCase);
	while (testCase--){
        int M,N,X,Y;
        scanf("%d%d%d%d",&M,&N,&X,&Y);
        for(i=0;i<M;i++){
            x = (N*i+Y)%M;
            if (!x) x = M;
            if (x == X) break;
        }
        if (i == M) puts("-1");
        else{
            printf("%d\n",i*N+Y);
        }
	}
	return 0;
}
