#include<iostream>
using namespace std;

int binCoeff(int n,int k) {
	if (k == 0 || n == k) {
		return 1;
	}
	return binCoeff(n - 1, k - 1) + binCoeff(n - 1, k);
}
int main() {
	int N, K;
	cin >> N >> K;
	cout<<binCoeff(N, K);
	return 0;
}

/*이항 계수의 가장 기본적인 구현 코드(재귀)*/
//n이 커지면 문제가 생겨 대부분의 대회에선 mod를 취한값을 정답으로처리
//이때는 return (binCoeff(n - 1, k - 1) + binCoeff(n - 1, k))%mod 이런식
//또한 매순간 factorial 계산은 부담이 큼 O(2n) (n이커질 때 문제)