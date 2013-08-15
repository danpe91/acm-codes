#include <cstdio>
#include <cstring>

int main() {
	
	int size = 0;
	char message[1000];

	while(scanf("%s", message) != EOF) {

		size = strlen(message);

		for (register int i = 0; i < size; ++i) {
			
			message[i] -= 7;
		}

		printf("%s\n", message);
	}

}