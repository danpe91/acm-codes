#include <cstdio>

int main() {

	short t = 0, r = 0, c = 0;

	scanf("%hd", &t);
	while (t--) {

		scanf("%hd %hd", &r, &c);

		printf("%s\n", (((r + c) & 1) ? ("First") : ("Second")));
	}
}
