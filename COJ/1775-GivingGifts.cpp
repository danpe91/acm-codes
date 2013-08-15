#include <cstdio>
#include <vector>
#include <algorithm>

struct friendposition {

	int index;
	int pi;
};

bool sortPi(friendposition i, friendposition j) {

	return i.pi < j.pi;
}

int main() {

	int n;
	scanf("%d", &n);
	std::vector<friendposition> friends;
	for ( int i = 1; i <= n; i++) {
		friendposition ni;

		ni.index = i;
		scanf("%d", &ni.pi);

		friends.push_back(ni);
	}
	sort(friends.begin(), friends.end(), sortPi);

	for ( int i = 0; i < n - 1; i++)
		printf("%d ", friends.at(i).index);
	printf("%d\n", friends.at(n - 1).index);
}