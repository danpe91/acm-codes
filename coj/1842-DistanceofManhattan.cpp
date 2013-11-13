#include <cstdio>
#include <cmath>

int main() {
	
	int t, x1, x2, y1, y2;

	scanf("%d", &t);
	for ( int i = 0; i < t; i++ ) {

		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

		printf("%d\n", (int)fabs(x2 - x1) + (int)fabs(y2 - y1));
	}


	
}