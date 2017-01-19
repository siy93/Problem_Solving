#include<cstdio>

int main(void){
	int A[10001] = { 0 };
	A[0] = A[1] = 1;
	for (int i = 2; i*i < 10000; i++){
		if (A[i] != 1){
			for (int j = i; j <= 10000; j += i){
				A[j] = 1;
			}
			A[i] = 0;
		}
	}
	int M, N,sum=0,min;
	scanf("%d %d",&M, &N);
	for (int i = M; i <= N; i++){
		if (A[i] == 0){ 
			if (sum == 0){ min = i; }
			sum += i;
		}
	}
	if (sum == 0){ puts("-1"); }
	else{
		printf("%d\n%d", sum, min);
	}
	return 0;
}

/*너무 쉬운문제 이지만 아리스토텔레스의체를 잊지 않기 위해 commit*/