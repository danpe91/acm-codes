#include <cstdio>
#include <vector>
#include <algorithm>

bool sorting(int i, int j) {

	return i > j;
}

int main() {
	
	int t, n;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {

		int maxdiscount = 0;
		scanf("%d", &n);
		std::vector<int> prices;

		for (int j = 0; j < n; j++) {

			int price;

			scanf("%d", &price);
			prices.push_back(price);
		}

		sort(prices.begin(), prices.end(), sorting);

		
		for (int j = 2; j < n; j += 3) {
		
			maxdiscount += prices[j];
		}

		printf("%d\n", maxdiscount);
	}
}