#include <cstdlib>
#include <cstdio>
#include <cstring>

int comp(const void * a, const void * b) {
	
	return (* (int *)a -  * (int *) b);
}

int comp2(const void * a, const void * b) {
	
	return (* (int *)b -  * (int *) a);
}

int main() {
	
	int n, d, c, sum;
	char t[20];

	scanf("%d", &c);

	while(c--) {

		scanf("%d %d %s", &n, &d, t);
		int numbers[n];
		sum = 0;

		for (register int i = 0; i < n; ++i)
		{
			scanf("%d", &numbers[i]);
		}

		if (strcmp(t, "regulate"))
			qsort(numbers, n, sizeof(int), comp);
		else
			qsort(numbers, n, sizeof(int), comp2);

		for (register int i = 0; i < d; ++i)
		{
			sum += numbers[i];
		}

		printf("%d\n", sum);
	}
}