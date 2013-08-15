#include <cstdio>

int getnumberofcases(double a,double b,double c) {

	int count = 0;

	
}

int main() {
	
	double a, b, c; register int i = 0;

	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF) {

		if ( (a + b) == c) {
			printf("Case %d: %.0lf+%.0lf=%.0lf\n", ++i, a, b, c);
			continue;
		}
		if ( (a - b) == c) {
			printf("Case %d: %.0lf-%.0lf=%.0lf\n", ++i, a, b, c);
			continue;
		}
		if ( (a * b) == c) {
			printf("Case %d: %.0lf*%.0lf=%.0lf\n", ++i, a, b, c);
			continue;
		}
		if ( (a / b) == c) {
			printf("Case %d: %.0lf/%.0lf=%.0lf\n", ++i, a, b, c);
			continue;
		}
		if ( a == (b + c)) {
			printf("Case %d: %.0lf=%.0lf+%.0lf\n", ++i, a, b, c);
			continue;
		}
		if ( a == (b - c)) {
			printf("Case %d: %.0lf=%.0lf-%.0lf\n", ++i, a, b, c);
			continue;
		}
		if ( a == (b * c)) {
			printf("Case %d: %.0lf=%.0lf*%.0lf\n", ++i, a, b, c);
			continue;
		}
		if ( a == (b / c)) {
			printf("Case %d: %.0lf=%.0lf/%.0lf\n", ++i, a, b, c);
			continue;
		}
	}
}
