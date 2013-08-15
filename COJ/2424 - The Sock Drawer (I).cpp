#include <cstdio>

int main() {

	short t = 0, k = 0, max = 0;
	scanf("%hd", &t);

	for (register short test_case = 1; test_case <= t; ++test_case) {

		max = 0;
		scanf("%hd", &k);
		short c[k];
		for (register short i = 0; i < k; ++i) {
			
			scanf("%hd", &c[i]);
			if (c[i] > max) {
				max = c[i];
			}
		}

		printf("Case %hd: %hd %hd\n", test_case, (k + 1), (max + 1));
	}
}
