#include <cstdio>
#include <stack>
struct user {

	int id;
	char name[30], firstap[30], secondap[30];
};

int main() {

	int t;
	scanf("%d", &t);

	while (t--) {

		user currentuser;

		scanf("%d %s %s %s", &currentuser.id, currentuser.name, currentuser.firstap, currentuser.secondap);

		printf("%d%s*%s*%s%d\n", (currentuser.id / 100), currentuser.secondap, currentuser.firstap, currentuser.name, (currentuser.id % 100));
	}
}
