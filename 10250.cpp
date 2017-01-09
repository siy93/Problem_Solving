#include<cstdio>

int main(void)
{
	int testCase;
	scanf("%d", &testCase);
	while (testCase--){
		int H, W, N;
		scanf("%d %d %d", &H, &W, &N);
		printf("%d%02d\n", N%H==0?H:N%H, N%H==0?N/H:N/H+1);
	}
	return 0;
}
