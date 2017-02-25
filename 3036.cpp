#include<iostream>
using namespace std;

int N;

int gcd(int a, int b){ return b ? gcd(b, a%b) : a; }
int main()
{
	cin >> N;
	int first,other,G;
	cin >> first;
	for (int i = 0; i < N-1; i++){
		cin >> other;
		G = gcd(first, other);
		cout << first / G << '/' << other / G << endl;
	}
	return 0;
}
