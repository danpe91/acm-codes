#include <cstdio>

int getSodas(int e, int f, int c) {
	//printf("entra\n");
	return ( (e + f)  < c )? (e + f) / c : (e + f) / c + getSodas(((e + f) / c) + (e + f) % c, 0, c);
}

int main() {

	int t, e, f, c;

	scanf("%d", &t);

	for (register int i = 0; i < t; i++) {
		scanf("%d %d %d", &e, &f, &c);
		printf("%d\n", (c == 0 || (((e + f) / c) + (e + f) % c ) >= e + f)? 0 : getSodas(e, f, c));
	}
}
