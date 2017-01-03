#include<cstdio>
#include<cstring>
using namespace std;

int main(void)
{
	int count = 1;
	char arr[1000001];
	gets(arr);
	int len = strlen(arr);
	for (int i = 1; i < len; i++){
		if (arr[i] == ' '){ count++; }
	}
	if (arr[len - 1] == ' ')count--;
	printf("%d", count);
	return 0;
}

/*
잘못 만든 문제인듯하다. 
공백이 여러개인 경우, 공백으로 시작한경우 등
여러방면에서 애초 문제의 의도와는 동떨어지는 경우의 수가 있다.
쓸데없이 시간만 잡아먹는 쓸모없는 문제.
*/