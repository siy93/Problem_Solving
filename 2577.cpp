#include<cstdio>
using namespace std;
typedef long long ll;

int main(void)
{
	int num, arr[10] = { 0 };
	ll sum = 1;
	for (int i = 0; i < 3; i++){ scanf("%d", &num); sum *= num; }
	while (1){
		int temp;
		temp = sum % 10;
		arr[temp]++;
		sum /= 10;
		if (sum == 0){ break; }
	}

	for (int i = 0; i < 10; i++){
		printf("%d\n", arr[i]);
	}

}
