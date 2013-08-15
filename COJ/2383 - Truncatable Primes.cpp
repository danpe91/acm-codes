#include <cstdio>
#include <cmath>
#include <vector>

#define EPS 1e-7
typedef unsigned long long LL;

std::vector<short> v(1E9, -1);

bool isPrimeSlow (LL x) {
	
  if(x<=1) return false;
  if(x<=3) return true;
  if (!(x%2) || !(x%3)) return false;
  LL s=(LL)(sqrt((double)(x))+EPS);
  for(LL i=5;i<=s;i+=6) {
    if (!(x%i) || !(x%(i+2))) return false;
  }
  return true;
}

bool isRightTruncatable(LL n) {

  LL temp = n;
  while (n > 0) {

    if (!isPrimeSlow(n)) {
      v[temp] = 0;
      v[n] = 0;
      return false;
    }

    n /= 10;
  }
  v[temp] = 1;
  return true;
}


bool isLeftTruncatable(LL n) {

  LL x = n, temp = n, c = 1;

  while (x >= 10) {
    c *= 10;
    x /= 10;
  }

  while (n > 0) {

    if (!isPrimeSlow(n)) {
      v[temp] = 0;
      v[n] = 0;
      return false;
    }

    n %= c;
    c/= 10;
  }
  v[temp] = 1;
  return true;
}

int main() {

  short t = 0;
  int n = 0;
  LL a = 0, b = 0;

  scanf("%hd", &t);

  while (t--) {
    n = 0;
    scanf("%Lu %Lu", &a, &b);
    
    for (register int i = a; i <= b; ++i) {
      if (v[i] != -1 || isRightTruncatable(i) || isLeftTruncatable(i)) {
        n++;
      }

    }
    printf("%d\n", n);
  }
}
