#include<iostream>
#include<cstdio>
using namespace std;

bool checkNum(int num)
{
	int hun, ten, one;
	hun = num / 100;
	num %= 100;
	ten = num / 10;
	num %= 10;
	one = num;
	if (hun - ten == ten - one){ return true; }
	else{ return false; }
}

int main(void)
{
	int N, count = 0;
	cin >> N;
	for (int i = 1; i <= N; i++){
		if (i<100){ count++; }
		else
		{
			if (checkNum(i)){ count++; }
		}
	}
	cout << count;
	return 0;
}
