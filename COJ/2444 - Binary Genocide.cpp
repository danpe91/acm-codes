#include <cstdio>
#include <bitset>

int main() {

	int count = 0, n = 0;
	
	while(scanf("%d", &n) != EOF) {

		std::bitset<10> number(n);
		if(!(number.count() & 1)) {
			count++;
		}
	}
	printf("%d\n", count);
}
