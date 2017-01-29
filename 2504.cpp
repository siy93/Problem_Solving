#include<cstdio>
#include<cstring>
char c;
int bracketCount = 0, braceCount = 0;
int flag1 = 0;

int LBrace();
int LBracket();
bool checker(int temp);

int main()
{
	int sum = 0;
	while (1){ 
		c = getchar(); 
		if (c == '\n'){ break; }
		if (c == '('){
			bracketCount++;
			sum += LBracket();
		}
		else if (c == '['){
			braceCount++;
			sum += LBrace();
		}
		else{
			flag1 = 1;
			break;
		}
	}
	if (flag1 == 1){ printf(0); }
	else { printf("%d", sum); }
	return 0;
}

int LBracket(){
	int temp = 0;
	while (bracketCount){
		c = getchar();
		if (c == '('){
			bracketCount++;
			temp += 2 * LBracket();
		}
		else if (c == '['){
			braceCount++;
			temp += 2 * LBrace();
		}
		else{
			if (c == ')'){
				bracketCount--; 
				if (!checker(bracketCount)){ break; }; 
				if (bracketCount == 0 ){ temp += 2 ; }
			}
			else {
				flag1 = 1;
				break;
			}
		}
	}
	return temp;
}
int LBrace(){
	int temp = 0;
	while (braceCount){
		c = getchar();
		if (c == '('){
			bracketCount++;
			temp += 3 * LBracket();
		}
		else if (c == '['){
			braceCount++;
			temp += 3 * LBrace();
		}
		else{
			if (c == ']'){
				braceCount--; 
				if (!checker(braceCount)){ break; };
				if (braceCount == 0){ temp += 3; }
			}
			else {
				flag1 = 1;
				break;
			}
		}
	}
	return temp;
}
bool checker(int temp){
	if (temp < 0){ flag1 = 1; return false; }
	return true;
}
