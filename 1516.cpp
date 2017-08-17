#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<vector<int> > graph;

int cost[501], dp[501], indegree[501];

int search(int vertex) {
	int &val = dp[vertex];
	if (!graph[vertex].size()) {
		val = cost[vertex];
		return val;
	}
	if (val != 0) return val;

	int maxVal = 0;
	for (auto i = 0; i < graph[vertex].size(); i++) {
		int temp = graph[vertex][i];
		maxVal = max(search(temp), maxVal);
	}

	dp[vertex] = maxVal + cost[vertex];
	return dp[vertex];

}


int main() {
	int n;
	cin >> n;
	
	graph.resize(n + 1);

	for (auto i = 1; i <= n; i++) {
		cin >> cost[i];
		int preBuild;
		while (cin >> preBuild) {
			if (preBuild == -1) { break; }
			graph[i].push_back(preBuild);
			indegree[preBuild]++;
		}
	}

	for (auto i = 1; i <= n; i++) {
		if (indegree[i] == 0) {
			search(i);
		}
	}

	for (auto i = 1; i <= n; i++)cout << dp[i] << endl;
	return 0;
}
