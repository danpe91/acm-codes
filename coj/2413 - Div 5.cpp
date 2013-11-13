#include <cstdio>
#include <cstring>
int main() {

	int n = 0, size = 0;
	scanf("%d", &n);
	char num[1005];
	while(n--) {
		scanf("%s", num);
		size = strlen(num);
		printf("%s\n", ((num[size - 1] == '5' || num[size - 1] == '0')?("YES"):("NO")));
	}
}
