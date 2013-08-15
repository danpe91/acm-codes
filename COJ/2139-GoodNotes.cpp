#include <cstdio>
#include <cstring>

bool subsequence(char * a, char * b) {

	int asize = strlen(a);
	int bsize = strlen(b);
	int currentposition = 0, found = 0;

	for (register int i = 0; i < asize; ++i)
	{
		for (register int j = currentposition; j < bsize; ++j)
		{
			if ( a[i] == b[j]) {

				currentposition = j + 1;
				found++;
				break;
			} else if ( j == (bsize - 1)) {
				return false;
			}

		}
	}
	return (found == asize);
}

int main(){

	char a[100100], b[100100];

	while (scanf("%s %s", a, b) != EOF) {

		printf("%s\n", subsequence(a, b) ? "Yes" : "No");
	}

}
