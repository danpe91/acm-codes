#include <cstdio>
#include <cstring>

int main() {
	
	int n, limit;
	char line[300];
	while (scanf("%d", &n), n != 0) {
		scanf("%s", line);
		limit = strlen(line) / n;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < limit; ++j) {
				if ( j & 1) {
					printf("%c", line[(n * j) - i + n - 1]);
				}
				else {
					printf("%c", line[(n * j) + i]);
				}
			}
		}
		printf("\n");
	}
	
	
}
