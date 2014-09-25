#include <cstdio>
#include <set>

using namespace std;

int main() {

	int n, m, max = 0, hero_cubano = 0;
	int follower, followed;

	scanf("%d %d", &n, &m);

	set<int> relations[n];

	while (m--) {

		scanf("%d %d", &follower, &followed);
		relations[follower - 1].insert(followed);
		
		if (relations[follower - 1].size() > max) {
			max = relations[follower - 1].size();
			hero_cubano = follower;
		}
	}

	printf("%d\n", hero_cubano);

}
