#include <cstdio>
#include <cstring>
#include <cmath>
#define N 1000
struct player {

	char name[N];
	int pa, pj, g, a, ta, tr;
};

double factor(player cplayer) {

	return log(cplayer.pa) + cplayer.pj + (2 * cplayer.g) + cplayer.a - (cplayer.ta + (2 * cplayer.tr));
}

int main() {
	
	int n, maxfactor = 0;
	char maxName[N];
	scanf("%d", &n);

	while( n--) {

		player currentplayer;
		scanf("%s %d %d %d %d %d %d", currentplayer.name, &currentplayer.pa, &currentplayer.pj,
									 &currentplayer.g, &currentplayer.a, &currentplayer.ta, &currentplayer.tr);

		if ( factor (currentplayer) >  maxfactor) {
			strcpy(maxName, currentplayer.name);
			maxfactor = factor(currentplayer);
		}
	}

	printf("%s\n", maxName);

}