#include <cstdio>
#include <map>

int main() {

	std::map<char, double> characters;
	short t = 0, k = 0;
	double single_value = 0.0;
	char single, line[10010];

	scanf("%hd", &t);

	while (t--) {

		scanf("%hd", &k);

		for (register int i = 0; i < k; ++i) {
			scanf("%c %d", &single, &single_value);
			characters[single] = single_value / 100;
		}
	}
}