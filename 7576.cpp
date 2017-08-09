#include<stdio.h>
#include<queue>
using namespace std;

const int dx[] = { 0,0,-1,1 };
const int dy[] = { -1,1,0,0 };
int N, M, ans, graph[1001][1001];
queue<pair<int, int> > Q;

int main() {
	int k = 0;
	scanf("%d %d", &M, &N);

	for (auto i = 0; i < N; i++) {
		for (auto j = 0; j < M; j++) {
			scanf("%d", &graph[i][j]);
			if (graph[i][j] == 1) Q.push({ i,j });
		}
	}

	while (!Q.empty()) {
		auto cur = Q.front();
		Q.pop();
		int x = cur.first,y = cur.second;
		ans = ans > graph[x][y] ? ans : graph[x][y];
		for (auto i = 0; i < 4; i++) {
			int nx = x + dx[i], ny = y + dy[i];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (graph[nx][ny] == 0) {
				Q.push({ nx,ny });
				graph[nx][ny] = graph[x][y] + 1;
			}
		}
	}
	for (auto i = 0; i < N; i++) {
		for (auto j = 0; j < M; j++) {
			if (graph[i][j] == 0) ans = 0;
		}
	}
	printf("%d", ans - 1);
	return 0;

}
