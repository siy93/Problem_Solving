#include<iostream>
#include<deque>

using namespace std;

int T;
int main()
{
	for (cin >> T; T--;){
		deque<int> d;
		char func[100000],temp;
		int n, val;
		bool direction = true,flag=false;

		cin >> func >> n;

		cin >> temp;
		for (int i=0;i<n;i++){
			cin >> val;
			d.push_back(val);
			if (i!=n-1){
				cin >> temp;
			}
		}
		cin >> temp;

		for (int i = 0; func[i] != NULL; i++){
			if (func[i] == 'R'){
				direction = !direction;
			}
			else {
				if (d.empty()){
					cout << "error" << endl;
					flag = true;
					break;
				}
				if (direction){
					d.pop_front();
				}
				else{
					d.pop_back();
				}
			}
		}
		if (flag){ continue; }
		cout << '[';
		if (!direction){
			for (int i = d.size() - 1; i >= 0; i--){
				cout << d[i];
				if (i){ cout << ','; }
			}
		}
		else{
			for (int i = 0; i < d.size(); i++){
				cout << d[i];
				if (i!=d.size()-1){ cout << ','; }
			}
		}
		cout << ']' << endl;

	}
	return 0;
}
