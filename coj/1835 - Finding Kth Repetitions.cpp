#include <cstdio>
#include <map>

int main() {
	
	int n, k, q, u, v;

	scanf("%d %d %d", &n, &k, &q);

	int numbers[n];

	for (int i = 1; i <= n; i++) {

		scanf("%d", &numbers[i]);
	}

	while_loop:
	while(q--) {

		std::map<int, int> mapa;
		scanf("%d %d", &u, &v);

		for (int i = u; i <= v; ++i) {
			
			if (++mapa[numbers[i]] == k) {
				printf("%s %d\n", "YES", numbers[i]);
				goto while_loop;
			} 
		}
		printf("%s\n", "NO");
	}
}

// INPUT
// 8 3 5   1 3 2 1 2 5 2 1   1 6   2 7   3 6   1 8   5 5

// OUTPUT
// NO
// YES 2
// NO
// YES 1
// NO


// you must also print the value of such number (coming first in the interval) which appears at least K times between u and v