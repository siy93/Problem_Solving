#include<cstdio>
#include<cstring>

int main(void)
{
	int testCase;
	scanf("%d", &testCase);
	while (testCase--){
		int R;
		char S[20];
		scanf("%d %s", &R,&S);
		for (int i = 0; S[i] != NULL; i++){
			for (int j = 0; j < R; j++){
				printf("%c", S[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
