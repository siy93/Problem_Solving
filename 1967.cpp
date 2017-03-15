#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int, int> p;
int n;
vector<vector<p> > v;
vector<bool> check;
int temp, tempSum;
void dfs(int start, int sum) {
	if(sum > tempSum) {
		tempSum = sum;
		temp = start;
	}
	check[start] = true;
	for (int i = 0; i < v[start].size(); i++)
		if (!check[v[start][i].first])
			dfs(v[start][i].first, sum + v[start][i].second);
}

int main()
{
	scanf("%d", &n);
	v.resize(n + 1);
	for (int i = 0; i < n - 1; i++) {
		int a, b, cost;
		scanf("%d %d %d", &a, &b, &cost);
		v[a].push_back(p(b, cost));
		v[b].push_back(p(a, cost));
	}
	check.resize(n + 1, false);
	tempSum = - 1;
	dfs(1, 0);
	fill(check.begin(), check.end(), false);
	tempSum = -1;
	dfs(temp, 0);
	printf("%d\n", tempSum);
	return 0;
}
