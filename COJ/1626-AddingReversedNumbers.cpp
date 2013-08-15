#include <cstdio>
#define ll long long

ll reverseNumber(ll number) {

	ll reverseN = 0;

	while(number > 0) {
		reverseN = (reverseN * 10) + (number % 10);
		number /= 10;
	}

	return reverseN;
}

int main() {
	
	int n;
	ll x, y;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		
		scanf("%lld%lld", &x, &y);
		printf("%lld\n", reverseNumber(reverseNumber(x) + reverseNumber(y)));
	}
}