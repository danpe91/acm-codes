#include <cstdio>
typedef long long ll;

ll getComb(ll n) {

	return n == 1? 1 : n == 2? 3 : n + getComb(n - 1);
}

int main() {

	ll t, n, l, w;

	scanf("%lld", &t);

	for (int i = 0; i < t; i++) {

		scanf("%lld%lld%lld", &n, &l, &w);
		printf("%lld\n", getComb(n + 1) * l * w);
	}
}