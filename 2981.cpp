#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<cstdlib>

int N;
int arr[100];
std::vector<int> divisor;
std::vector<int>::iterator it;

void getDivisor(int num);
int compare(const void *a, const void * b){
	return (*(int*)a - *(int*)b);
}
int main()
{
	bool flag;
	int temp;
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%d", &arr[i]);
	}

	qsort(arr, N - 1, sizeof(int), compare);
	getDivisor(arr[N - 1] - arr[0]);
	qsort(&divisor[0], divisor.size(), sizeof(int), compare);

	for (it = divisor.begin(); it != divisor.end(); it++){
		flag = true;
		temp = arr[0] % *it;
		for (int j = 1; j < N; j++){
			if (arr[j] % *it != temp){
				flag = false;
				break;
			}
		}
		if (flag){
			printf("%d ", *it);
		}
	}

	return 0;
}

void getDivisor(int num)
{
	int j = 0;
	for (int i = 2; i <= sqrt(num); i++){
		if (num%i == 0){
			divisor.push_back(i);
			divisor.push_back(num / i);
		}
	}
	divisor.push_back(num);
}
