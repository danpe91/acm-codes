#include <cstdio>
#include <cstring>

int main() {

	int n, size, lastnumber;

	scanf("%d", &n);

	while(n--) {

		char number[70];
		
		scanf("%s", number);

		size =  strlen(number);
		lastnumber = number[size - 1] - 48;

		printf("%s\n", (lastnumber & 1) ? "odd" : "even");
	}
}
