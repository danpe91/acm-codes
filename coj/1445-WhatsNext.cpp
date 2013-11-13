#include <cstdio>

int main() {

	int sequence[5];

	while ( scanf("%d %d %d", &sequence[0], &sequence[1], &sequence[2]), sequence[0] != 0,  sequence[1] != 0,  sequence[2] != 0 ) {

		if (sequence[2] - sequence[1] == sequence[1] - sequence[0])
			printf("AP %d\n", sequence[2] + (sequence[2] - sequence[1]));
		else
			printf("GP %d\n", sequence[2] * (sequence[2] / sequence[1]));
	}
}
