#include <cstdio>

int main() {
	
	int n, s;

	scanf("%d %d", &n, &s);

	int triangle[n][n];

	for ( int i = 0; i < n; i++) {
		for ( int j = 0; j < n; j++) {
			if ( j > i)
				triangle[i][j] = -1;
			else {
				if (s % 10 == 0)
					s++;
				triangle[i][j] = s++ % 10;
			}

		}
	}

	for ( int i = 0; i < n; i++) {
		for ( int j = 0; j < n; j++)  {
			if (triangle[j][i] != -1){
				printf("%d", triangle[j][i]);
				if ( j != (n - 1))
					printf(" ");
			}
			else
				printf("  ");
		}
		printf("\n");
	}
}