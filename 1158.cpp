#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue<int> q;
	int M, N,count;
	cin >> M >> N;
	count = N;
	for (int i = 1; i <= M; i++){
		q.push(i);
	}
	if (M == 1)
	{
		cout << "<1>";
		return 0;
	}
	
	for (int i = 1; i <= M;){
		if (count == 1){
			if (i == 1){
				cout << '<';
				cout << q.front();
				cout << ',';
			}
			else if (i == M){
				cout << ' ';
				cout << q.front();
				cout << '>';
			}
			else{
				cout << ' ';
				cout << q.front();
				cout << ',';
			}
			q.pop();
			count = N;
			i++;
		}
		else{
			q.push(q.front());
			q.pop();
			count--;
		}
	}
	
	return 0;
}
