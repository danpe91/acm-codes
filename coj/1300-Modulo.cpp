#include <cstdio>
#include <vector>

bool exists(std::vector<long> v, int number) {
	for ( int i = 0; i < v.size(); i++) {
		if (v[i] == number)
			return true;
	}
	return false;
}

int main() {

	std::vector<long> numbers;

	for ( int i = 0; i < 10; i++) {

		long number;
		scanf("%ld", &number);
		if ( !exists(numbers, number % 42))
			numbers.push_back(number % 42);
	}
	
		printf("%d\n", numbers.size());
}