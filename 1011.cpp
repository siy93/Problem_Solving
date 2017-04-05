#include <iostream>
using namespace std;

int main(){
	int n;
	unsigned int a, b, x;
	unsigned int k;
	cin >> n;
	for (int i = 0; i<n; i++){
		cin >> a >> b;
		x = b - a;
		k = 0;
		for (unsigned int i = 1;; i++){
			k += i;
			if (x <= k){
				cout<<2*i-1<<endl;
				break;
			}
			k += i;
			if (x <= k){
				cout<<2*i<<endl;
				break;
			}
		}
	}
}
