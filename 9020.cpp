#include<cstdio>

int main(void){
	int A[10001] = { 0 };
	A[0] = A[1] = 1;
	for (int i = 2; i*i < 10000; i++){
		if (!A[i]){
			for (int j = i; j <= 10000; j += i){
				A[j] = 1;
			}
			A[i] = 0;
		}
	}
	int T, N,a,b;
	for (scanf("%d", &T); T--;){
		scanf("%d", &N);
		a = b = N / 2;
		while (1){
			if (A[a] == 0 && A[b] == 0){ printf("%d %d\n", a, b); break; }
			else{ a -= 1; b += 1; }
			}
	}
	return 0;
}