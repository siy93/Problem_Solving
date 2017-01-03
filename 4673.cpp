#include<cstdio>
using namespace std;

int main(void)
{
	int num[9];
	for (int i = 1; i <= 8; i++){
		scanf("%d", &num[i]);
	}
	for (int i = 1; i <= 8; i++){
		if (num[i] == i){
			continue;
		}
		else if (num[i] == 8){
			break;
		}
		else{
			printf("%s", "mixed");
			return 0;
		}
		printf("%s", "ascending");
	}
	for (int i = 8; i >= 1; i--){
		if (num[i] == i){
			continue;
		}
		else{
			printf("%s", "mixed");
			return 0;
		}
		printf("%s", "descending");
	}
	return 0;
}
