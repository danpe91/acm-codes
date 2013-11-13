#include <cstdio>

int main() {
	
	int t, n;

	scanf("%d", &t);

	for ( int i = 0; i < t; i++) {

		scanf("%d", &n);
		int numbers[n], odd = 0, even = 0;

		for ( int j = 0; j < n; j++) {

			scanf("%d", &numbers[j]);
			if ( numbers[j] & 1)
				odd++;
			else
				even++;
		}

		printf("%d even and %d odd.\n", even, odd);
	}
}