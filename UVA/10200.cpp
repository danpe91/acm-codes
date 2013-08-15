#include <cmath>
#include <cstdio>

#define EPS 1e-7
typedef long long LL;

bool isPrime (LL x) {
  if(x<=1) return false;
  if(x<=3) return true;
  if (!(x%2) || !(x%3)) return false;
  LL s=(LL)(sqrt((double)(x))+EPS);
  for(LL i=5;i<=s;i+=6) {

    if (!(x%i) || !(x%(i+2))) return false;
  }

  return true;
}

int main() {
 	
 	int a = 0.0, b = 0.0;
	int c = 0;
	int save[10005];
	for ( int i = 0; i < 10005; i++) {
			if(isPrime((i*i) + i + 41)) {
				c++;
			}
			save[i] = c;
	}

	while(scanf("%d %d", &a, &b) != EOF) {	
		
		c = ((!b) ? (0) : (save[b])) - ((!a) ? (0) : (save[a -1]));
		
		printf("%4.2lf \n", (((c / (double)(b - a + 1)) * 100) + .001));
	}
}
