#include <cstdio>

int main() {
	
	char cad[] = {'A','B','C','D','E'};
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - i; j++) {
			for (int k = i; k < 5 - j; k++) {
				printf("%c", cad[i * j + k]);
			}printf("-\n");
		}
		printf("-\n");
	}
	
	
}
