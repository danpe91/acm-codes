#include <cstdio>
#include <vector>
#include <algorithm>

#define ll long long
#define PB push_back

bool validation1(ll number, ll max) {

	return number >= max;
}
bool validation2(ll number1, ll number2, ll max) {

	return (number1 + number2) < max;
}

int main() {

	int n; ll max, count = 0;

	scanf("%d", &n);
	std::vector<ll> numbers;
	for (int i = 0; i < n; ++i) {
		
		ll number;
		scanf("%lld", &number);
		numbers.PB(number);
	}
	scanf("%lld", &max);
	sort(numbers.begin(), numbers.end());

	for (int i = n - 1; i >= 0; i--) {
		if(validation1(numbers.at(i), max))
			continue;
		for (int j = i - 1; j >= 0; j--){
			if (validation2(numbers.at(i), numbers.at(j), max))
				break;
			if((numbers.at(i) + numbers.at(j)) == max)
				count++;
		}
	}

	printf("%lld\n", count);

}