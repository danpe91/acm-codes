#include <cstdio>
#include <vector>
#include <algorithm>

struct team {
	int index;
	int id;
	int solved;
};

bool sortBySolved(team i, team j) {
	
	return i.solved == j.solved? i.index < j.index :  i.solved > j.solved;
}

int main() {
	
	int n;

	scanf("%d", &n);
	std::vector<team> teams;

	for ( int i = 0; i < n; i++) {
		team t;
		t.index = i;
		scanf("%d%d", &t.id, &t.solved);
		teams.push_back(t);
	}

	sort(teams.begin(), teams.end(), sortBySolved);

	for ( int i = 0; i < n; i++)
		printf("%d %d\n", teams.at(i).id, teams.at(i).solved);
}