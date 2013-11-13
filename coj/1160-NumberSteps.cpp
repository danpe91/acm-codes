#include <cstdio>

bool getNumber(int x, int y) {

	if ( (x & 1) && (y & 1) && (x == y || y == (x - 2)) ) {
		printf("%d\n", x + y -1);
		return true;
	}
	else if ( !(x & 1) && !(y & 1) && (x == y || y == (x - 2)) ) {
		printf("%d\n", x + y);
		return true;
	}
	return false;

}

int main() {

	int t, x, y;

	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d%d", &x, &y);
	
		if (!getNumber(x, y))
			printf("No Number\n");
	}

}