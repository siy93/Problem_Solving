#include<iostream>
#include<queue>

using namespace std;

int main()
{
	int T, num;
	char order[5];
	queue<int> q;

	for (cin >> T; T--;){
		cin >> order;
		switch (order[0]){
		case 'p':
			if (order[1] == 'u')
			{
				cin >> num;
				q.push(num);
			}
			else{
				if (q.empty()){
					cout << -1 << endl;
				}
				else{
					cout << q.front() << endl;
					q.pop();
				}
			}
			break;
		case 'f':
			if (q.empty()){
				cout << -1 << endl;
			}
			else{
				cout << q.front() << endl;
			}
			break;
		case 'b':
			if (q.empty()){
				cout << -1 << endl;
			}
			else{
				cout << q.back() << endl;
			}
			break;
		case 's':
			cout << q.size() << endl;
			break;
		case 'e':
			cout << q.empty() << endl;
			break;
		}
	}

	return 0;
}
