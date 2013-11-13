#include <cstdio>

int main() {
	
	short n;

	while (scanf("%hd", &n) != EOF) {

		printf("%c\n", (n % 6) ? 'N' : 'Y');
	}
}
