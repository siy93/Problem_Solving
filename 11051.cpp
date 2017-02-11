#include<iostream>
#include<algorithm>
#define MAX 1001
#define MOD 10007
using namespace std;
int N, K, binoCoeff[MAX][MAX];
int main() {
	cin >> N >> K;
	for (int i = 1; i <= N+1; i++) {
		for (int j = 1; j <= min(i, K+1); j++) {
			if(j == 1 || j==i){
				binoCoeff[i][j] = 1;
			}
			else {
				binoCoeff[i][j] = (binoCoeff[i - 1][j - 1] + binoCoeff[i - 1][j]) % MOD;
			}
		}
	}
	cout << binoCoeff[N+1][K+1];
	return 0;
}


//*이항 계수 메모이제이션 (동적계획법) 으로 구현한코드
//반복 연산이 줄어 O(nk)에 풀 수 있다.
//for문의 범위를 잘 생각해야한다.