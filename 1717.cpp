// Disjoint-set
// https://ko.wikipedia.org/wiki/디스조인트-셋_자료_구조

#include<stdio.h>
#include<vector>

using namespace std;

vector<int> parent;
vector<int> rnk;

struct tree {
	tree(int n) 
	{
		for (auto i = 1; i <= n; i++) {
			parent[i] = i;
			rnk[i] = 1;
		}
	}
	int find(int u) {
		if (u == parent[u]) return u;
		return parent[u] = find(parent[u]);
	}

	void uni(int u, int v) {
		u = find(u);
		v = find(v);

		if (u == v)
			return;
		if (rnk[u] > rnk[v])
			swap(u, v);

		parent[u] = v;
		if (rnk[u] == rnk[v])
			++rnk[v];
	}
};


int main()
{
	int n, m;

	scanf("%d %d", &n, &m);
	parent.resize(n + 2);
	rnk.resize(n + 2);
	tree t(n);

	int job, a, b;
	for (auto i = 1; i <= m; i++) {
		scanf("%d %d %d", &job, &a, &b);

		if (!job) {
			t.uni(a, b);
		}
		else {
			if (t.find(a) == t.find(b))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}

	return 0;

}
