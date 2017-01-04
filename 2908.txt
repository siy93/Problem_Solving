#include<cstdio>
#include<cstring>
using namespace std;

int main(void)
{
	char A[100],B[100];
	int Alen, Blen;
	for (int i = 0;; i++){
		scanf("%c", &A[i]);
		if (A[i] == ' '){ Alen = i; break; }
	}
	for (int i = 0;; i++){
		scanf("%c", &B[i]);
		if (B[i] == '\n'){ Blen = i; break; }
	}
	if (Alen > Blen){
		for (int i = Alen-1;i>=0; i--){
			printf("%c", A[i]);
		}
	}
	else if (Alen < Blen){
		for (int i = Blen - 1; i>=0; i--){
			printf("%c", B[i]);
		}
	}
	else{
		for (int i = 0; i <Alen; i++){
			if (A[Alen - 1 - i] > B[Blen - 1 - i]){
				for (int i = Alen - 1; i>=0; i--){
					printf("%c", A[i]);
				}
				return 0;
			}
			else if (A[Alen - 1 - i] < B[Blen - 1 - i]){
				for (int i = Blen - 1; i>=0; i--){
					printf("%c", B[i]);
				}
				return 0;
			}
			else{
				continue;
			}
		}
	}
	return 0;
}
