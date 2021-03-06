#include <cstdio>
#include <cmath>
#define EPS 1e-7
typedef long long LL;

bool IsPrimeSlow (LL x)
{
  if(x<=1) return false;
  if(x<=3) return true;
  if (!(x%2) || !(x%3)) return false;
  LL s=(LL)(sqrt((double)(x))+EPS);
  for(LL i=5;i<=s;i+=6)
  {
    if (!(x%i) || !(x%(i+2))) return false;
  }
  return true;
}

int main() {

	int t;
	LL m, n;
	scanf("%d", &t);

	for (LL i = 0; i < t; i++) {
		scanf("%lld%lld", &m, &n);

		for (LL j = m; j <= n; j++) {
			
			if ( IsPrimeSlow(j)) {
				printf("%lld\n", j);
			}
		}
		printf("\n");
	}
}