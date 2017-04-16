#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> v;
vector<int> DP;

int main()
{
	int N, cost;
	int max;

	cin >> N;
	v.resize(N+1);
	DP.resize(N+1);
	for (int i = 1; i <= N; i++){
		cin >> cost;
		v[i] = cost;
	}

	DP[1] = v[1];

	for (int i = 2; i <= N; i++){
		max = v[i];
		for (int j = i-1; j > -1; j--){
			if (max < DP[j] + DP[i - j])
				max = DP[j] + DP[i - j];
		}
		DP[i] = max;
	}
	
	cout << DP[N];

	return 0;
}
