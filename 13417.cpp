#include<iostream>
#include<deque>

using namespace std;

int main()
{
	int N, T;
	cin >> T;
	while (T--) {
		cin >> N;
		deque<char> dq;
		deque<char>::iterator it;
		char alpha;
		for (int i = 0; i < N; i++) {
			cin >> alpha;
			if (dq.empty()) dq.push_back(alpha); 
			else dq.front() < alpha ? dq.push_back(alpha) : dq.push_front(alpha);
		}
		for (it = dq.begin(); it != dq.end();it++){
			cout << *it;
		}
		cout << endl;
	}

	return 0;
}
