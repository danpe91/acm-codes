#include <cstdio>
#include <cstdlib>

int main() {
	
	int n;

	while(scanf("%d", &n), n != -1) {

		int sum = 0, count = 0;
		for (register int i = 0; i < n; ++i) {

			int number;
			scanf("%d", &number);
			sum += number;
			if ( (sum % 100) == 0) {
				count++;
				sum -= 100;
			}
		}

		printf("%d\n", count);

	}
	
}
