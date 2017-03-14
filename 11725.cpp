#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
int check[100001];

int main()
{
	vector<vector <int> > v;
	queue<int> q;
	int N, a, b;


	scanf("%d", &N);
	v.resize(N + 1);

	for (int i = 0; i<N - 1; i++) {
		scanf("%d %d", &a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	q.push(1);

	while (!q.empty()) {
		int start = q.front(); q.pop();
		for (int i = 1; i <= v[start].size(); i++)
		{
			if (!check[v[start][i - 1]]) {
				check[v[start][i - 1]] = start;
				q.push(v[start][i - 1]);
			}
		}
	}

	for (int i = 2; i <= N; i++) {
		printf("%d\n", check[i]);
	}
	return 0;
}
