#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--){
		string s1,s2;
		int N,sW=0,sB=0,eW=0,eB=0,diff=0;
		cin >> N >> s1 >> s2;
		for(int i=0;i<N;i++){
			s1[i] == 'W' ? sW++ : sB++;
			s2[i] == 'W' ? eW++ : eB++;
			if(s1[i] != s2[i]){
				diff++;
			}
		}
		cout<<abs(sW-eW) + (diff - abs(sW-eW))/2 << endl;
	}
	return 0;
}
