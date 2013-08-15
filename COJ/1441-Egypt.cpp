#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

bool hasProperty(std::vector<ll> v) {

	return ((v[0] * v[0]) + (v[1] * v[1])) == (v[2] * v[2]);
}

int main() {
	
	ll a, b, c;
	
	while ((scanf("%lld%lld%lld", &a, &b, &c)) && a != 0 && b != 0 && c != 0) {

		std::vector<ll> numbers;
		numbers.push_back(a);
		numbers.push_back(b);
		numbers.push_back(c);
		sort(numbers.begin(), numbers.end());

		if ( hasProperty(numbers) )
			printf("right\n");
		else
			printf("wrong\n");

	}
}