#include<cstdio>
#include<cstring>

int main(void)
{
	char ch[1000001];
	int alpha[26] = { 0 };
	int len;
	gets(ch);
	len = strlen(ch);
	for (int i = 0; i < len;i++){
		alpha[(ch[i] - 'A')%32]++;
	}
	int max = 0,rem;
	bool flag = false;
	for (int i = 0; i < 26; i++){
		if (max < alpha[i]){ max = alpha[i]; flag = false; rem = i; }
		else if (max == alpha[i]){ flag = true; }
	}
	printf("%c", flag ? '?' :rem +'A');
	return 0;
}
