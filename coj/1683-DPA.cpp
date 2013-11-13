#include <cstdio>

int main() {
	
	int t;
	scanf("%d", &t);
	start:
	while (t--) {
		
		int n, sum = 0;
		scanf("%d", &n);

		for (register int i = 1; i <= (n / 2); ++i){
			if (n % i == 0)
				sum += i;
			if ( sum > n) {
				printf("Abundant\n");
				goto start;
			}
		}
		printf("%s\n", sum == n? "Perfect" : "Deficient");
	}
}
