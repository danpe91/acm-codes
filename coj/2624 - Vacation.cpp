#include <cstdio>
#include <cstdlib>

int compare (const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
}

int main() {

	int t = 0, m = 0, n = 0, sum = 0, cities = 0;
	scanf("%d", &t);

	while(t--) {

		scanf("%d %d", &m, &n);
		int d[n];
		cities = 0, sum = 0;

		for (int i = 0; i < n; ++i) {
			
			scanf("%d", &d[i]);
		}

		qsort(d, n, sizeof(int), compare);
		for (int i = 0; i < n; ++i)
		{
			if ((d[i] + sum) <= m) {
				sum += d[i];
				cities++;
			} else {
				break;
			}
		}
		printf("%d\n", cities);
	}
}
