#include<stdio.h>
#include<tuple>
#include<queue>

using namespace std;

const int dx[] = { 0,0,-1,1,0,0 };
const int dy[] = { -1,1,0,0,0,0 };
const int dz[] = { 0,0,0,0,1,-1 };
int N, M, H, ans, graph[101][101][101];

queue<tuple<int, int, int> > Q;

int main() {
	scanf("%d %d %d", &M, &N, &H);

	for (auto k = 0; k < H; k++) {
		for (auto i = 0; i < N; i++) {
			for (auto j = 0; j < M; j++) {
				scanf("%d", &graph[i][j][k]);
				if (graph[i][j][k] == 1) Q.push(make_tuple(i,j,k));
			}
		}
	}

	while (!Q.empty()) {
		auto cursor = Q.front();
		Q.pop();

		int x = get<0>(cursor), y = get<1>(cursor), z = get<2>(cursor);
		ans = ans > graph[x][y][z] ? ans : graph[x][y][z];
		for (auto i = 0; i < 6; i++) {
			int nx = x + dx[i], ny = y + dy[i], nz = z + dz[i];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M || nz < 0 || nz >= H) continue;
			if (graph[nx][ny][nz] == 0) {
				Q.push(make_tuple( nx,ny,nz ));
				graph[nx][ny][nz] = graph[x][y][z] + 1;
			}
		}
	}

	for (auto k = 0; k < H; k++) {
		for (auto i = 0; i < N; i++) {
			for (auto j = 0; j < M; j++) {
				if (graph[i][j][k] == 0) ans = 0;
			}
		}
	}

	printf("%d", ans - 1);
	return 0;
}

