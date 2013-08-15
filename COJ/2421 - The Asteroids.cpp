#include <cmath>
#include <cstdio>

struct point {
	
	double x, y;

	point() {
		x = 0.0;
		y = 0.0;
	}

	point(double _x, double _y) {
		x = _x;
		y = _y;
	}
};

struct asteroid {
	
	point centre;
	double radius;

	asteroid() {
		radius = 0.0;
	}

	asteroid(struct point _centre, double _radius) {
		centre = _centre;
		radius = _radius;
	}
};

double getDistance(struct point shuttle, struct asteroid ast) {

	double x_diff = ast.centre.x - shuttle.x;
	double y_diff = ast.centre.y - shuttle.y;
	double to_square = (x_diff * x_diff) + (y_diff * y_diff);

	double distance = sqrt(std::abs(to_square));

	return distance - ast.radius;
}

int main() {

	short n = 0, index = 0;
	double x = 0.0, y = 0.0, radius = 0.0, min_distance = 100000000.0, distance = 0.0;

	while(scanf("%hd", &n), n) {

			index = 0;
			min_distance = 100000000.0;
			scanf("%lf %lf", &x, &y);

			point shuttle(x, y);
		for ( register int i = 1; i <= n; ++i) {

			scanf("%lf %lf %lf", &x, &y, &radius);
			point ast_point(x, y);
			asteroid ast(ast_point, radius);

			distance = getDistance(shuttle, ast);

			if (distance < min_distance) {
				min_distance = distance;
				index = i;
			}
		}

		printf("%hd\n", index);
	}

	
}
