#include <cstdio>

bool rule1(double a) {

	return a != 0;
}

bool rule2(double a, double b, double c) {

	return ((b * b) - (4 * a * c)) >= 0;
}
int main() {

	double a, b, c;

	scanf("%lf %lf %lf", &a, &b, &c);

	if ( rule1(a) && rule2(a, b, c))
		printf("YES\n");
	else
		printf("NO\n");
}