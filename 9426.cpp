#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
 {
	int N, K, num;
	int beginIndex, endIndex,midValue;

	int ans = 0;
	cin >> N >> K;

	vector<int> v;
	v.resize(N);

	for (int i = 0; i < N; i++){
		cin >> num;
		v[i] = num;
	}

	sort(v.begin(), v.end());

	midValue = (K + 1) / 2;
	beginIndex = midValue - 1;
	K%2 ? endIndex = N - midValue : endIndex = N - midValue - 1;
	
	for (int i = beginIndex; i <= endIndex; i++){
		ans += v[i];
	}

	cout << ans;

	return 0;
}
