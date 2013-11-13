#include <cstdio>
#include <cstring>

int main () {


  int count, t;
  char a[1000100], b[1000100];
  char * pch;

  scanf("%d", &t);

  for (int i = 1; i <= t; i++) {
    count = 0;
    scanf("%s %s", a, b);

    pch = strstr (a, b);
    while (pch != NULL) {

      count++;
      pch = strstr (pch+1,b);
    }

    printf ("Case %d: %d\n", i, count);
  }

}
