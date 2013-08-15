#include <cstdio>

int main() {
	
	double m, n;

	while (scanf("%lf %lf", &m, &n) != EOF) {

		printf("%.2lf\n", m / n);
	}
}