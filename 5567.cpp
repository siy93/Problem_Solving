#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;
int g[502][502];

int main()
{
	int n, m, a, b;
	int check, count = 0;
	cin >> n >> m;

	vector<int> f;
	queue<int> ff;

	f.resize(n + 1);
	
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		g[a][b] = 1;
		g[b][a] = 1;
	}

	for (int i = 2; i <= n; i++) {
		if (g[1][i]) {
			f[i] = 1;
			ff.push(i);
		}
	}

	while (!ff.empty()) {
		check = ff.front(); ff.pop();
		for (int i = 2; i <= n; i++) {
			if (g[check][i] && !f[i]) { f[i] = 1; }
		}
	}

	for (int i = 2; i <= n; i++) {
		count += f[i];
	}

	cout << count;
	return 0;
}
