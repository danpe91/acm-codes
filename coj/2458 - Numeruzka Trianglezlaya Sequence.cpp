#include <cstdio>
#include <map>
typedef unsigned long long ull;

std::map<ull, ull> values;
	
ull nts(const ull n) {

	ull count = 0, position = 0;

	do {
		count++;
		position += count;
	} while (position < n);

	values[n] = count;
	return count;
}

int main() {

	ull n = 0;

	while (scanf("%lld", &n), n != 0) {
		printf("%lld\n", ((values[n])?(values[n]):(nts(n))));
	}
}
