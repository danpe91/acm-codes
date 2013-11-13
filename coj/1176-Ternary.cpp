#include <cstdio>
typedef long long ll;

ll ternario(ll n) {
	if(n < 3)
		return n;
	else
		return n%3 + (ternario(n / 3)) * 10;
}

int main() {
	
	ll number;

	while ( scanf("%lld", &number) && number > 0) {

		printf("%lld\n", ternario(number));
	}
}