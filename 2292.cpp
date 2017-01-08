#include<cstdio>
#include<cstring>
typedef long long ll;

int main(void)
{
	ll num,sum=1;
	scanf("%lld", &num);
	for (int i = 0;;i++){
		sum += 6 * i;
		if (num <= sum){ printf("%d", i+1); break; }
	}
	return 0;
}
