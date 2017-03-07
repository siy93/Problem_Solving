#include<iostream>
#include<algorithm>
#include<deque>

using namespace std;
int N, M;
int main()
{
	deque<int> d, dL, dR;
	int val,ans=0,leftAns,rightAns;
	cin >> N >> M;
	for (int i = 1; i <= N; i++){
		d.push_back(i); dL.push_back(i); dR.push_back(i);
	}
	
	while (M--){
		cin >> val;
		if (val == d.front()){
			d.pop_front();
			dL.resize(d.size()); dR.resize(d.size());
			copy(d.begin(), d.end(), dL.begin());
			copy(d.begin(), d.end(), dR.begin());
		}
		else{
			leftAns = 0, rightAns = 0;
			//left
			while (1){
				dL.push_back(dL.front());
				dL.pop_front();
				leftAns++;
				if (val == dL.front()){ dL.pop_front(); break; }
			}
			//right
			while (1){
				dR.push_front(dR.back());
				dR.pop_back();
				rightAns++;
				if (val == dR.front()){ dR.pop_front(); break; }
			}
			if (leftAns > rightAns){
				ans += rightAns;
				d.resize(dR.size());
				copy(dR.begin(), dR.end(), d.begin());
			}
			else{
				ans += leftAns;
				d.resize(dL.size());
				copy(dL.begin(), dL.end(), d.begin());
			}
			
		}
	}
	cout << ans;
	return 0;
}
