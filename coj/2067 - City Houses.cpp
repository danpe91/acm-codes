#include <cstdio>
#include <cmath>
#define BIG_NUMBER 1000000000
typedef long long ui;

struct point {
	
	ui x, y;

	point() {
		x = 0;
		y = 0;
	}

	point(ui _x, ui _y) {
		x = _x;
		y = _y;
	}
};

ui getDistance(struct point dot_1, struct point dot_2) {

	ui x_diff = std::abs(dot_1.x - dot_2.x);
	ui y_diff = std::abs(dot_1.y - dot_2.y);
	
	ui distance = x_diff + y_diff;

	return distance;
}

int main() {

	int n = 0, x = 0, y = 0;
	ui distance = 0;
	scanf("%d", &n);

	ui min_distance[n];
	point houses[n];
	for (register int i = 0; i < n; ++i) {
		min_distance[i] = BIG_NUMBER;
		scanf("%d %d", &x, &y);
		houses[i] = point(x, y);
	}

	for (register int i = 0; i < (n - 1); ++i) {
		for (register int j = i + 1; j < n; ++j) {
			distance = getDistance(houses[i], houses[j]);
			
			min_distance[i] = ((distance < min_distance[i])? (distance) : (min_distance[i]));
			min_distance[j] = ((distance < min_distance[j])? (distance) : (min_distance[j]));
		}
	}
	for (register int i = 0; i < n; ++i) {
		printf("%lld\n", min_distance[i]);
	}
}
