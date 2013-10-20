#include <cstdio>
#define N 10
bool compare (int n, int * lumbers) {


		printf("%d\n", (lumbers[n] <= lumbers[n - 1]));
	if (n == 1) {
		return (lumbers[n] <= lumbers[n - 1]);
	}
	return ((lumbers[n] <= lumbers[n - 1]) == (compare(n -1, lumbers)));
}

int main() {

	int n = 0, lumbers[N];

	scanf("%d", &n);
	printf("%s\n", "Lumberjacks:");

	while(n--) {

		for (int i = 0; i < N; ++i) {
			
			scanf("%d", &lumbers[i]);
		}

		printf("%s\n", ((compare(N - 1, lumbers))? ("Ordered") :("Unordered")));
	}
}
