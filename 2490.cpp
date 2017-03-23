#include<cstdio>

int main()
{
	int three = 3;
	while (three--){
		int count = 0, num;
		for (int i = 0; i < 4;i++){
			scanf("%d",&num);
			if (!num){ count++; }
		}
		if (!count){ printf("%c\n", 'E'); }
		else{
			printf("%c\n", 'A' + count - 1);
		}
	}
	return 0;
}
