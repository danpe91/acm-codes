#include <cstdio>
#include <vector>
typedef long long ll;

std::vector<int> getVector(int n) {
	
	std::vector<int> v;
	do {
		int r = n % 10;
		n /= 10;
		v.push_back(r);
	} while( n > 0);

	return v;
}

ll getSum(std::vector<int> v1, std::vector<int> v2) {

	ll sum = 0;
	for ( int i = 0; i < v1.size(); i++) {
		for (int j = 0; j < v2.size(); ++j) {
			
			sum += v2.at(j) * v1.at(i);
		}
	}

	return sum;
}

int main() {
	
	ll a, b;
	std::vector<int> as, bs;

	scanf("%lld%lld", &a, &b);
	as = getVector(a);
	bs = getVector(b);
	
	printf("%lld\n", getSum(as, bs));
}