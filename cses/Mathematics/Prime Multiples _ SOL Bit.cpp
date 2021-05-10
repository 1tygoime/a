/// Cre: NotWailydest

#include <cstdio>
 
const int N = 20;
long long n, a[N];
int k;
 
int main() 
{
	scanf("%lld%d", &n, &k);
	for (int i = 0; i < k; ++i) scanf("%lld", a + i);
	long long ans = 0;
	for (int i = 1; i < 1 << k; ++i) {
		long long p = 1;
		bool ok = true;
		for (int j = 0; j < k && ok; ++j) if (i >> j & 1) {
			if (p > n / a[j]) ok = false;
			else p *= a[j];
		}
		if (ok) {
			if (__builtin_popcount(i) & 1) ans += n / p;
			else ans -= n / p;
		}
	}
	printf("%lld\n", ans);
	return 0;
}