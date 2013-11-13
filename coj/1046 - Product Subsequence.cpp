#include <cstdio>
#define N 3e3

typedef unsigned long long ull;

int main() {

	int t = 0, a = 0, b = 0;
	ull n[(int)N], m[(int)N], sum = 0;
	
	scanf("%d", &t);

	for (int i = 0; i <= N; ++i) {

		n[i] = i * (i + 1) * (i + 2);
		
		if (i != 0)
			m[i] = m[i - 1] + n[i];
		
	}
	m[0] = 0;
	
	while(t--) {

		sum = 0;
		scanf("%d %d", &a, &b);

		printf("%lld\n", (m[b] - m[a - 1]) % 100);
	}
}
