#include <cstdio>

struct rectangle {

	int ulx, uly, lrx, lry;
};
int getArea(rectangle * rectangles) {

	return (rectangles[0].ulx - rectangles[1].ulx);

}

int main() {

	int t;

	scanf("%d", &t);
	rectangle rectangles[t];

	for ( int i = 0; i < t ; i++) {

		scanf("%d%d%d%d", &rectangles[i].ulx, &rectangles[i].uly, &rectangles[i].lrx, &rectangles[i].lry);
	}


}