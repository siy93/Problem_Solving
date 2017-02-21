#include<iostream>
#include<algorithm>
using namespace std;
int N;
int arr[301] = { 0 };
int stair[301] = { 0 };
int main()
{
	cin >> N;
	for (int i = 0; i < N;i++) {
		cin >> stair[i];
	}
	for (int i = 0; i < 3 && i<N; i++) {
		if (i == 2) {
			arr[i] = max(stair[i] + stair[i - 1], stair[i] + stair[i - 2]);
		}
		else {
			arr[i] = arr[i - 1] + stair[i];
		}
	}
	for (int i = 3; i < N; i++) {
		arr[i] = max(stair[i] + arr[i - 2], stair[i] + stair[i - 1] + arr[i - 3]);
	}
	cout << arr[N-1];
	return 0;
}