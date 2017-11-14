#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

typedef struct KS {
	int from;
	int to;
	int val;
}KS;

int parent[1001];
int N, M;
vector<KS> v;

int find(int u) {
	if (u == parent[u]) return parent[u];
	return parent[u] = find(parent[u]);
}

bool merge(int u, int v) {
	u = find(u);
	v = find(v);

	if (u == v) { return false; }
	parent[u] = v;

	return true;
}

bool comp1(KS a, KS b) {
	return a.val < b.val;
}

bool comp2(KS a, KS b) {
	return a.val > b.val;
}

int cal(bool type) {
	int ret = 0;
	if (type) { sort(v.begin(), v.end(), comp1); }
	else {
		sort(v.begin(), v.end(), comp2);
	}

	for (int i = 0; i <= 1001; i++) {
		parent[i] = i;
	}

	for (int i = 0; i <= M; i++) {
		if (merge(v[i].from, v[i].to)) {
			ret += v[i].val;
		}
	}
	return ret;
}

int main() {

	cin >> N >> M;

	for (int i = 0; i <= M; i++) {
		KS ks;
		cin >> ks.from >> ks.to >> ks.val;
		ks.val = !ks.val;
		v.push_back(ks);
	}

	int worst = cal(false);
	int best = cal(true);
	cout << worst * worst - best * best;
	return 0;
}
