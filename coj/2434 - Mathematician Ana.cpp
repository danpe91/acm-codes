#include <cstdio>
#include <cmath>

#define EPS 1e-7
typedef long long LL;

bool isPrimeSlow (LL x)
{
	if(x<=1) return false;
	if(x<=3) return true;
	if (!(x%2) || !(x%3)) return false;
	LL s=(LL)(sqrt((double)(x))+EPS);
	for(LL i=5;i<=s;i+=6) {
		if (!(x%i) || !(x%(i+2))) return false;
	}
	return true;
}

LL primorial(LL n) {

	LL primorial = 1;

	while (n > 1) {

		if (isPrimeSlow(n)) {
			primorial *= n;
		}
		n--;
	}

	return primorial;
}

int main() {

	int n = 0;

	while(scanf("%d", &n), n != 0) {
		printf("%lld\n", primorial(n));
	}
}
