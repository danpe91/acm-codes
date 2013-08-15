#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
	
	int n;
	std::vector<int> numbers;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int ni;
		scanf("%d", &ni);
		numbers.push_back(ni);
	}

	sort(numbers.begin(), numbers.end());

	for (int i = 0; i < n; i++)
		printf("%d\n", numbers[i]);
}