#include <cstdio>
#include <sys/time.h>

#define MOD 1000000007
#define ull unsigned long long

double timeval_diff(struct timeval * a, struct timeval * b) {
	return
	(double)(a->tv_sec + (double)a->tv_usec/1000000) -
	(double)(b->tv_sec + (double)b->tv_usec/1000000);
}

ull gcd(ull a, ull b) {
	return ((b)? (gcd(b, a%b)) : (a));
}

int main() {

	ull n = 0, sum = 0;
	struct timeval tStart, tStop;
	//while(scanf("%lld", &n) != EOF) {
	n = 1000000000;
		gettimeofday(&tStart, NULL);
		//printf("%lld\n", n);
		sum  = 0;
		for (ull i = 2; i < n; ++i) {
			
			if (gcd(n, i) != 1)	sum += i;
			//printf("%lld\n", i);
		}
			gettimeofday(&tStop, NULL);

		printf("%lld\n", sum % MOD);
			printf("Time elapsed: %.10lf s\n", timeval_diff(&tStop, &tStart));
	//}
}
