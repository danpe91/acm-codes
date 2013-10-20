#include <cstdio>
#include <cmath>
#include <map>

typedef long double  ull;

std::map<int, ull> map;

ull xFunction(ull i) {
	//printf("%LF\n", i);
	return (((int)i)? (xFunction(i - sqrt(i)) + xFunction(log(i)) + xFunction(i * (sin(i) * sin(i)))): (1));
}

int main() {

	int n = 0;

	while (scanf("%d", &n), n > -1) {
		if(!map[n]) {
			map[n] = xFunction(n);
		}
		printf("%.0LF\n", map[n] );
	}
}
