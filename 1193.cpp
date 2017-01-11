#include<cstdio>
typedef long long ll;
int i;
int main(void)
{
	ll x,num;
	scanf("%lld", &x);
	for (i=1;;i++){
		if (i*(i + 1) / 2 >= x){ num = (i-1)*i/2; break; }
	}
	if (i % 2 == 0){
		printf("%d/", x - num);
		printf("%d", i - x + num + 1);
	}
	else{
		printf("%d/", i - x + num + 1);
		printf("%d", x - num);
	}
	return 0;
}