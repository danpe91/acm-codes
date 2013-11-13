#include <cstdio>
#include <cstdlib>

typedef unsigned long long ull;

int compare (const void * a, const void * b) {
  return ( *(ull*)a - *(ull*)b );
}

int main() {

	unsigned int n = 0;

	while (scanf("%d", &n), n != 0) {
		ull x[n];
		for (register int i = 0; i < n; ++i) {
			
			scanf("%lld", &x[i]);
		}
		qsort (x, n, sizeof(ull), compare);

		if (n & 1) {
			printf("%0.1lf\n", (double)x[n / 2]);
		} else {
			printf("%0.1lf\n", ((x[(n / 2) - 1] + x[n / 2]) / 2.0) + 0.01);
		}
	}
}
