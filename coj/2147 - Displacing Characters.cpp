#include <cstdio>
#include <cstring>

int main() {

	int n = 0, k = 0, size = 0;

	scanf("%d", &n);

	while(n--) {
		char s[510];

		scanf("%s %d", s, &k);
		size = strlen(s);
		k %= size;
		for ( register int i = 0; i < size; ++i) {
			
			printf("%c", s[(((i + size) - k) % size)]);
		}
		printf("\n");
	}
}
