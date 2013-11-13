#include <cstdio>
#define ll long long
int main() {

	ll t, max = 0;

	scanf("%lld", &t);
	if ( t > 0) {
		ll a, b, c;
		scanf("%lld%lld%lld", &a, &b, &c);
		if ((a + b + c) != 0)
			max = (a + b + c);
	}

	for (int i = 0; i < t-1; i++) {
		
		ll a, b, c;
		scanf("%lld%lld%lld", &a, &b, &c);

		if (max > (a + b + c))
			max = (a + b + c);
	}

	printf("%lld\n", max);
}
