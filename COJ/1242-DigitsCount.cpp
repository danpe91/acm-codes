#include <cstdio>

int main() {

		int a, b;
	while (scanf("%d %d", &a, &b), !(a == 0 && b == 0)) {

		int numbers[10];
		for (register int i = 0; i < 10; i++)
			numbers[i] = 0;

		for (register int i = a; i <= b; i++) {
			register int j = i;

			while (j > 0) {
				numbers[j % 10]++;
				j /= 10;
			}

		}
		printf("%d %d %d %d %d ", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
		printf("%d %d %d %d %d\n", numbers[5], numbers[6], numbers[7], numbers[8], numbers[9]);
	}


}
