#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	long long n, k, val;
	while (true) {
		scanf("%lld%lld", &n, &k);
		if ((n + k) == 0) break;
		k = min(k, n - k);
		val = 1;
		for (long long r = 1; r <= k; r++) {
			val = val*(n - r + 1) / r;
		}
		printf("%lld\n", val);
	}
}


/*이항계수를 가장 가장 기본적인 연산방식으로 구현 */