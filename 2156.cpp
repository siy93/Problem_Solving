#include<iostream>

using namespace std;

int wine[10001], DP[10001];

int main()
{
	int N;
	int first, second, third;

	cin >> N;
	for (int i = 1; i <= N; i++){
		cin >> wine[i];
	}

	DP[1] = wine[1];
	DP[2] = wine[1] + wine[2];
	
	for (int i = 3; i <= N; i++){
		first = DP[i - 1];
		second = wine[i] + DP[i - 2];
		third = wine[i] + wine[i - 1] + DP[i - 3];
		DP[i] = first > second ?
			first > third ? first : third :
			second > third ? second : third;			
	}

	cout << DP[N];
	return 0;
}
