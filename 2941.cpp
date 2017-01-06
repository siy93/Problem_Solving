#include<cstdio>
#include<cstring>

int main(void)
{
	char ch[100];
	int count = 0;
	gets(ch);
	for (int i = 0; i<strlen(ch); i++)
	{
		if (ch[i] == 'c'){
			if (ch[i + 1] == '=' || ch[i + 1] == '-'){count++; i++;}
			else{count++;}
		}
		else if (ch[i] == 'd'){
			if (ch[i + 1] == 'z' && ch[i + 2] == '='){count++; i += 2;}
			else if (ch[i + 1] == '-'){count++; i++;}
			else{count++;}
		}
		else if (ch[i] == 'l' || ch[i] == 'n'){
			if (ch[i + 1] == 'j'){ count++; i++; }
			else{ count++; }
		}
		else if (ch[i] == 's' || ch[i] == 'z'){
			if (ch[i + 1] == '='){ count++; i++; }
			else{ count++; }
		}
		else{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
