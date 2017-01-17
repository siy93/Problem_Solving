#include<cstdio>
void plusSet(int A[]){
	for (int i = 0; i < 10; i++){ A[i]++; }
}

int main(void)
{
	int A[10] = { 0 }, count = 1, num, check;
	plusSet(A);
	for (scanf("%d", &num);num>0;num/=10){
		check = num % 10;
		if (A[check] > 0){ A[check]--; continue; }
		else{
			if (check == 6){
				if (A[9] == 0){ num *= 10; count++; plusSet(A); continue; }
				else{
					A[9]--; continue;
				}
			}
			else if (check == 9){
				if (A[6] == 0){ num *= 10; count++; plusSet(A); continue; }
				else{
					A[6]--; continue;
				}
			}
			else{
				num *= 10; count++; plusSet(A); continue;
			}
		}
	}
	printf("%d", count);
	return 0;
}