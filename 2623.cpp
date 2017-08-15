/*최초코드

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int graph[1001][1001];
int check[1001];
int check2[1001];

queue<int> q;
vector<int> v;

int N, M;


void reCheck() {
	for (auto i = 1; i <= N; i++) {
		for (auto j = 1; j <= N; j++) {
			if (graph[i][j] == 1) { check[j] = 1; }
		}
	}

	for (auto i = 1; i <= N; i++)
		if (!check[i] && !check2[i]) {
			check2[i] = 1;
			q.push(i);
		}
}

void bfs(int N) {
	int front = q.front();
	v.push_back(front);
	q.pop();

	for (auto i = 1; i <= N; i++) {
		graph[front][i] = 0;
		check[i] = 0;
	}
	reCheck();
}


int main()
{
	cin >> N >> M;

	int singerNum, before,after;
	

	for (auto i = 0; i < M; i++) {
		cin >> singerNum;
		cin >> before;
		for (auto j = 0; j < singerNum-1; j++) {
			cin >> after;
			graph[before][after] = 1;
			before = after;
		}
	}
	reCheck();
	while (!q.empty()) {
		bfs(N);
	}

	for (auto i = 1; i <= N; i++) {
		if (check2[i] == 0) { cout << 0; return 0; }
	}
	
	for (auto i = 0; i < N; i++) {
		cout << v[i] << endl;
	}

	return 0;
}
*/

