#include<cstdio>

int T;
int main(void)
{
	int A[15][15] = { 0 };
	int k, n;

	for (int i = 0; i <=14; i++){
		for (int j = 1; j <= 14; j++){
			if (i == 0){ A[i][j] = j; } // base case;
			else{
				A[i][j] = A[i][j - 1] + A[i - 1][j];
			}
		}
	}
	for (scanf("%d ", &T); T--;){
		scanf("%d %d", &k, &n);
		printf("%d\n", A[k][n]);
	}
	return 0;
}