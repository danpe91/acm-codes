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
		if (!(x%i) || !(x%(i+2))) {return false;}
	}
	return true;
}

int main() {

	int a = 0, b = 0, c = 0;
	int primes[1000002];

	for ( register int i = 0; i < 1000002; ++i) {
		if (isPrimeSlow(i)) {
			c++;
		}
		primes[i] = c;
	}
	while(scanf("%d %d", &a, &b), (a != 0 || b != 0)) {

		printf("%d\n", primes[b] - primes[a - 1]);
	}
}
