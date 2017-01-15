#include<cstdio>
#include<cstring>
int T, L, R;
int main(void)
{
	char arr[51];
	for (scanf("%d ", &T); T--;){
		gets(arr);
		L = 0, R = 0;
		for (int i = 0;; i++){
			if (L < R){ break; }
			if (arr[i] == '('){ L++; }
			else if (arr[i] == ')'){ R++; }
			else{ break; }
		}
		if ((arr[0] == '(' && arr[strlen(arr)-1] == ')') &&  (L == R)){ printf("YES\n"); }
		else{ printf("NO\n"); }
	}
	return 0;
}