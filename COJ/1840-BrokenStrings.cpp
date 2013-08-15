#include <cstdio>
#include <cstring>

int getCount(char * s, char letter) {

	int count = 0;
	for (int i = 0; i < strlen(s); i++) {
		if ( s[i] == letter)
			count++;
	}
	return count;
}

bool isSecure(int b, int r, int o, int k, int e, int n) {

	return (b == r && r == o && o == k && k == e && e ==n);
}

int main() {


	int t;

	scanf("%d", &t);

	for (int i = 0; i < t; ++i) {
		
		char word[1000];
		scanf(" %s", word);

		if (isSecure(getCount(word, 'B'), getCount(word, 'R'), getCount(word, 'O'), getCount(word, 'K'), getCount(word, 'E'), getCount(word, 'N'))) {
			printf("No Secure\n");
		} else {
			printf("Secure\n");
		}
	}
}