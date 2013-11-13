#include <cstdio>
typedef long long ll;

int main() {

	int n;
	ll sum = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		ll number;
		scanf("%lld", &number);
		sum += number;
	}

	printf("%lld\n", sum % 128 );
}
