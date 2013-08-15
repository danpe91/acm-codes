#include <cstdio>

int main() {
	
	int n, maxindex = 0;
	double max = 0.0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		double p;
		scanf("%lf", &p);

		if(p >= max) {
			max = p;
			maxindex = i + 1;
		}
	}
	printf("%d\n", maxindex);
}