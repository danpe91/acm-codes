#include <cstdio>
#include <cstdlib>
struct point {
	int x, y;
};

int compare(const void *a, const void *b) 
{ 
        struct point *ia = (struct point *)a;
        struct point *ib = (struct point *)b;

        int diff = (int)(ia->x - ib->x);
    return diff;
}

int compare_by_y(const void *a, const void *b) 
{ 
        struct point *ia = (struct point *)a;
        struct point *ib = (struct point *)b;

        int diff = (int)(ia->y - ib->y);
    return diff;
}
int getX(const struct point * a) {

	if (a[2].x != a[1].x) {
		return a[2].x;
	}
	return a[0].x;
}

int getY(const struct point * a) {

	if (a[2].y != a[1].y) {
		return a[2].y;
	}
	return a[0].y;
}

int main() {

	point points[3];
	int x = 0, y = 0;

	for (register int i = 0; i < 3; ++i) {
		
		scanf("%d %d", &points[i].x, &points[i].y);
	}

	size_t structs_len = sizeof(points) / sizeof(struct point);
	qsort(points, structs_len, sizeof(struct point), compare);

	x = getX(points);
	qsort(points, structs_len, sizeof(struct point), compare_by_y);
	y = getY(points);
	printf("%d %d\n", x, y);
}
