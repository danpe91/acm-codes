#include <cstdio>
#include <vector>
#include <algorithm>
double getAverage(std::vector<int> numbers, int h, int l) {

	double sum = 0.0;

	for (int i = 0 + l; i < numbers.size() - h; ++i) {
		
		sum += numbers[i];
	}

	return sum / (numbers.size() - (h + l));
}

int main() {

	int h, l, n;
	
	while(scanf("%d%d%d", &h, &l, &n) && h != 0 && l != 0 && n != 0) {
		std::vector<int> numbers;	
		for (int i = 0; i < n; ++i){
			int number;
			scanf("%d", &number);
			numbers.push_back(number);
		}
		sort(numbers.begin(), numbers.end());
		printf("%.6f\n", getAverage(numbers, h, l));
	}
}