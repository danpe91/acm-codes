#include <cstdio>

int main() {

	int day = 0;
	double h = 0.0, u = 0.0, d = 0.0, f = 0.0, fatigue_factor = 0.0, current_initial_height = 0.0, current_final_height = 0.0, current_final_sliding_height = 0.0;
	bool fail = false;

	while (scanf("%lf %lf %lf %lf", &h, &u, &d, &f), h) {

		fatigue_factor = ((u * f) / 100);
		day = 0;
		current_final_sliding_height = 0.0;
		current_initial_height = 0.0;
		current_final_height = 0.0;
		fail = false;
		
		while (current_final_height <= h) {

			current_final_height = current_final_sliding_height;
			current_final_height += (u - (fatigue_factor * day++));
			current_final_sliding_height = current_final_height - d;
			
			if ((current_final_sliding_height) < 0) {
				fail = true;
				break;
			}
		}

		printf("%s %d\n", ((fail)? ("failure on day"):("success on day")), day);
	}
}
