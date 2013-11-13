#include <cstdio>

typedef unsigned long long ull;

int main() {

	ull a = 0, b = 0;
	
	while (scanf("%lld %lld", &a, &b) != EOF) {
		printf("%lld\n", ((a > b)? (a - b) : (b - a)));
	}
}
