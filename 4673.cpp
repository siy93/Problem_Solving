#include<iostream>
#include<cstdio>
using namespace std;

int tempmaker(int num){
	int sum = 0;
	sum += num;
	if (num < 10){ return sum + num; }
	while (1){
		if (num / 10 == 0){ return sum + num; }
		sum += num % 10;
		num /= 10;
	}
}

int main(void)
{
	int S[10001] = { 0 }, temp;
	S[1] = false;
	for (int i = 1; i <= 10000; i++)
	{
		temp = tempmaker(i);
		if (temp <= 10000)
			S[temp] = true;
	}
	for (int i = 1; i <= 10000; i++)
	{
		if (S[i] == false)printf("%d\n", i);
	}
}
