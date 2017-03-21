#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int M, N;
	int tempM, tempN, sum = 0;
	cin >> M >> N;
	
	tempM = sqrt(M);
	if (tempM*tempM == M){ tempM -= 1; }
	tempN = sqrt(N);
	sum = 0;

	for (int i = tempM + 1; i <= tempN; i++){
		sum += i*i;
	}

	if (!sum){
		cout << -1;
	}
	else{
		cout << sum << endl << (tempM + 1)*(tempM + 1);
	}
	return 0;
}
