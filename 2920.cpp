#include<cstdio>
using namespace std;

int main(void)
{
	int num[9];
	for (int i = 1; i <= 8; i++){
		scanf("%d", &num[i]);
	}
	if (num[1] == 1){
		for (int i = 1; i <= 8; i++){
			if (num[i] == i){
				continue;
			}
			else{
				printf("%s", "mixed");
				return 0;
			}
		}
		printf("%s", "ascending");
	}
	else if (num[1] == 8){
		for (int i = 1; i <= 8; i++){
			if (num[i] == 9-i){
				continue;
			}
			else{
				printf("%s", "mixed");
				return 0;
			}
		}
		printf("%s", "descending");
	}
	else{
		printf("%s", "mixed");
	}
	return 0;
}
