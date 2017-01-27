#include<cstdio>

int cnt[10001] = { 0 };
int main(void)
{
	int T, num;
	for (scanf("%d", &T); T--;){
		scanf("%d", &num);
		cnt[num]++;
	}
	
	for (int i = 1; i <= 10000; i++){
		if (cnt[i])
			for (int j = 0; j < cnt[i]; j++)
				printf("%d\n", i);
	}
	return 0;
}

/*
counting sort 의 비효율적 버전 
개선방안 : http://bowbowbow.tistory.com/8
*/