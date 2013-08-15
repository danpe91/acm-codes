#include <cstdio>
#include <cstdlib>

int comp(const void * a, const void * b) {
	return * (int *) a - * (int *) b; 
}

int main() {
	
	int t;

	scanf("%d", &t);
	while(t--) {
		int d, p, sum = 5, aux = 0, j;
		scanf("%d %d", &d, &p);

		int times[p], acumtimes[p];

		for (register int i = 0; i < p; ++i) {
			scanf("%d", &times[i]);
		}
		qsort(times, p, sizeof(int), comp);
		j = 0;
		if ( sum + times[j] <= d) {
			sum += times[j];
			acumtimes[j] = sum;
			j++;
		} else { aux--;
			acumtimes[0] = 0;
		}
		for (j = 1 ; j < p; j++) {
			if ( sum + times[j] <= d) {
				sum += times[j];
				acumtimes[j] = acumtimes[j - 1] + sum;
			} else {
				break;
			}
		}
		printf("%d %d\n", j + aux, acumtimes[j - 1]);
	}
}
