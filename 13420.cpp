#include<iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--){
		long long int operand1,operand2,result,cal;
		char operator1,trash;
		cin >> operand1 >> operator1 >> operand2 >> trash >> result;
		switch(operator1)
		{
		    case '+':
		        cal = operand1 + operand2;
		        break;
		    case '-':
		        cal = operand1 - operand2;
		        break;
		    case '*':
		        cal = operand1 * operand2;
		        break;
		    case '/':
		        cal = operand1 / operand2;
		        break;
		}
		cal == result ? cout << "correct" : cout << "wrong answer";
		cout << endl;
	}
	return 0;
}
