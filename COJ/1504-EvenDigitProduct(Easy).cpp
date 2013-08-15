#include <cstdio>

inline bool P(int x) {

	while (x > 0) {
		if (!((x % 10) & 1))
			return true;
		x /= 10;
	}
	return false;
}

int main() {
	
	register int t;
	int a, b, p;
	scanf("%d", &t);

	while(t--) {
		scanf("%d %d", &a, &b);
		p = 0;
		for (register int i = a; i <= b; ++i)
		{
			if (P(i))
				p++;
		}
		
		printf("%d\n", p);
	}
}