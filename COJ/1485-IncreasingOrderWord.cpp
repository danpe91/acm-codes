#include <cstdio>
#include <cstring>
#include <algorithm>

int compare (const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
}

int main() {

	int n;
	char c[1000];
	scanf("%s", c);
	int size = strlen(c);
	int value[size];
	for (int i = 0; i < size; i++) {
		value[i] = c[i];
	}
	qsort (value, size, sizeof(int), compare);
	for (int i = 0; i < size; i++)
		printf("%c",(char)value[i]);
	printf("\n");
	
}
