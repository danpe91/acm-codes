#include <cstdio>

typedef long long LL;
void boolConverter(int n, long & counter) {

	LL iter = 1;
	while (n) {
		if (n % 2 != 0) {
			counter++;
		}

		n /= 2;
		iter *= 10;
	}
}

int main() {

	int a, b; long counter, t;

	scanf("%ld", &t);

	while(t--) {
		scanf("%d %d", &a, &b);

		counter = 0;
		for (int i = a; i <= b; ++i) {

			boolConverter(i, counter);
		}
		printf("%ld\n", counter);
	}
}
