#include <cstdio>

#define P(X) printf("%lld\n",X)
typedef long long ll;

ll sums[500000];
ll getSum(int n) {
	if (sums[n] != 0 && n != 1)
		return sums[n];
	ll sum = 0;
	for (int i = 1; i <= (n / 2); ++i) {
		
		if (n % i == 0) {
			sum += i;
		}
	}
	sums[n] = sum;
	return sum;
}

int main() {
	
	int t;
	scanf("%d", &t);
	
	for (int i = 0; i < t; ++i) {
		int n;
		scanf("%d", &n);
		
		P(getSum(n));
	}
}