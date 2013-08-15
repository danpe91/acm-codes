#include <cstdlib>
#include <cstdio>
#include <cmath>

int compare (const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
}

int main() {

	int n = 0;
	bool jolly = 1;
	while (scanf("%d", &n) != EOF) {
		
		int sequence[n], difference_vector[n - 1];
		jolly = true;
		scanf("%d", &sequence[0]);

		for (int i = 1; i < n; i++) {

			scanf("%d", &sequence[i]);
			difference_vector[i - 1] = std::abs(sequence[i] - sequence[i - 1]);
		}
		qsort (difference_vector, n - 1, sizeof(int), compare);

		for (int i = 1; i < n - 1; i++) {
			
			if (std::abs(difference_vector[i] - difference_vector[i - 1]) != 1) {
				jolly = false;
				break;
			}
		}

		if (!jolly) {
			printf("Not jolly\n");
		} else {
			printf("Jolly\n");
		}
	}
}
