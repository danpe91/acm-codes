#include <cstdio>

typedef unsigned long long ull;

int main() {

	ull n = 0, on = 0, hm = 0, current_n = 0;

	while (scanf("%lld", &n), n) {

		on = 1;
		hm = 0;
		current_n = 1;
		
		while(current_n <= n ){

			current_n += on;
			hm++;
			on += 2;
		}

		printf("%lld\n", hm);
	}
}
