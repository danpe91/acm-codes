#include <cstdio>

struct test {

	int math, physics, composite;
};

int main() {
	
	int t;
	scanf("%d", &t);

	while (t--) {

		int n, count = 0, sum = 0;
		double average;

		scanf("%d", &n);
		test children[n];
		for (register int i = 0; i < n; ++i)
		{
			scanf("%d", &children[i].math);
		}
		for (register int i = 0; i < n; ++i)
		{
			scanf("%d", &children[i].physics);
			children[i].composite = (children[i].math + children[i].physics);
			sum += children[i].composite;
		}

		average = (double)sum / (double)n;
		for (register int i = 0; i < n; ++i)
			if ( children[i].composite < average )
				count++;
			
		printf("%d\n", count);
	}
}
