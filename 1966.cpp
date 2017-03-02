#include<iostream>
#include<queue>
#include<deque>
using namespace std;
int T;

int main()
{
	for (cin >> T; T--;){
		int N, M, num;
		int cursor,counter = 0;
		priority_queue<int> pq;
		deque<int> dq;

		cin >> N >> M;
		cursor = M;

		for (int i = 0; i < N; i++){
			cin >> num;
			pq.push(num), dq.push_back(num);
		}

		int top;
		while (1){
			top = pq.top();
			if (top == dq.front()){
				counter++;
				if (cursor == 0){
					break;
				}
				else{
					dq.pop_front();
					pq.pop();
					cursor--;
				}
			}
			else{
				dq.push_back(dq.front());
				dq.pop_front();
				cursor--;
			}

			if (cursor < 0){
				cursor = dq.size()-1;
			}
		}
		

		cout << counter << endl;

	
	}
	return 0;
}
