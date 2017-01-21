#include<cstdio>

int main(void){
	int A[246913] = { 0 };
	A[0] = A[1] = 1;
	for (int i = 2; i*i < 246913; i++){
		if (A[i] != 1){
			for (int j = i; j <= 246913; j += i){
				A[j] = 1;
			}
			A[i] = 0;
		}
	}
	int num,ans;
	for (;;){
		ans = 0;scanf("%d", &num);
		if (num == 0){ break; }
		else{
			for (int i = num + 1; i <= 2 * num; i++){
				if (A[i] == 0){ ans++; }
			}
			printf("%d\n", ans);
		}
	}
	return 0;
}