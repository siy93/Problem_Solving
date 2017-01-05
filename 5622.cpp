#include<cstdio>
#include<cstring>
using namespace std;

int main(void)
{
    int arr[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	int sum = 0;
	char alpha;
	for (int i = 0; i < 15;i++){
		scanf("%c", &alpha);
		if(alpha == '\n'){break;}
        sum+=arr[alpha-'A'];
	}
	printf("%d", sum);
	return 0;
}
