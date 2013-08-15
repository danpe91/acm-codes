#include <cstdio>
#include <cstring>

char * getHamming(char * s, int d) {

	char bitstring[100];
	strcpy(bitstring, s);

	for (int i = 0; i < strlen(s); i++)	{
		if ( d > 0) {
			if (bitstring[i] == '1') {
				s[i] = '0';
				d--;
			}
		} else {
			break;
		}
	}

	for (int i = strlen(s) - 1; i >= 0; i--) {
		if (d > 0) {

			if (bitstring[i] != '1' && d > 0) {
				s[i] = '1';
				d--;
			}
		}
		else {
			break;
		}
		
		
	}
	return s;
}

int main() {
	
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)	{
		
		char s[100];
		int d;
		scanf("%s %d", s, &d);
		printf("Case #%d: %s\n", i + 1, getHamming(s, d));
	}
}