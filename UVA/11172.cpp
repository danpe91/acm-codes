#include <cstdio>

int main() {
	short t = 0;
	long a = 0, b = 0;

	scanf("%d", &t);

	while(t--) {

		scanf("%ld %ld", &a, &b);

		if (a < b) {
			printf("<\n");
		} else if(a > b) {
			printf(">\n");
		} else {
			printf("=\n");
		}
	}
}
