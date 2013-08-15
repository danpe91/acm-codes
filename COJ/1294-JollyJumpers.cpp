#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>

#define PB push_back
int main() {

	int n;
	
	while (scanf("%d", &n) != EOF) {
		int sequence[n];
		bool jolly = true;
		std::vector<int> sequencevector;
		scanf("%d", &sequence[0]);

		for (int i = 1; i < n; i++) {

			scanf("%d", &sequence[i]);
			sequencevector.PB(fabs(sequence[i] - sequence[i - 1]));
		}
		sort(sequencevector.begin(), sequencevector.end());
		for (int i = 1; i < n - 1; i++) {
			
			if (!(fabs(sequencevector[i] - sequencevector[i - 1]) == 1))
				jolly = false;
		}

		if (!jolly || !(sequencevector.back() == 1 || sequencevector.front() == 1) ) {
			printf("Not jolly\n");
		} else {
			printf("Jolly\n");
		}
	}

}
