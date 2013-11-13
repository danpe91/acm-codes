#include <cstdio>

#define PI 3.1415926535897932384626433
int main() {

	short t = 0, n = 0;
	double r = 0.0, h = 0.0, volume = 0.0;
	scanf("%hd", &t);

	while (t--) {
		volume = 0.0;
		scanf("%hd", &n);

		for (register int i = 0; i < n; ++i) {
			
			scanf("%lf %lf", &r, &h);
			volume += (PI * (r * r) * h);
		}

		printf("%0.2lf\n", volume);
	}
}
