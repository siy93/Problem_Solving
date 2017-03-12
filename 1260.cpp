#include<iostream>
#include<queue>
using namespace std;

int graph[1001][1001];
int check[1001];
queue<int> q;

void dfs(int size);
void bfs(int size);

int main()
{
	int N, M, V;
	int a, b;
	

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++){
		cin >> a >> b;
		graph[a][b] = 1;
		graph[b][a] = 1;
	}

	q.push(V); check[V] = 1;
	cout << V << ' ';
	dfs(N);


	cout << endl;

	for (int i = 1; i <= N; i++){ check[i] = 0; }

	q.push(V); check[V] = 1;
	cout << V << ' ';
	bfs(N);

	return 0;
}

void dfs(int size)
{
	int v = q.front(); q.pop();
	check[v] = 1;
	for (int i = 1; i <= size; i++){
		if (graph[v][i] == 1 && !check[i]){
			cout << i << ' ';
			q.push(i);
			dfs(size);
		}
	}
}

void bfs( int size)
{
	if (q.empty()){ return; }
	int v = q.front(); q.pop();
	for (int i = 1; i <= size; i++){
		if (graph[v][i] == 1 && !check[i]){
			cout << i << ' ';
			q.push(i); check[i] = 1;
		}
	}
	bfs(size);
}
