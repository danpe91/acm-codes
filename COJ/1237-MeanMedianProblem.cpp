#include <cstdio>

int main() {

	int a, b, c;

	while ((scanf("%d %d", &a, &b)) && (a != 0 && b != 0)) {
		
		c = a - ( b - a);

		printf("%d\n", c);
	}
}