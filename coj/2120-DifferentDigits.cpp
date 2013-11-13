#include <cstdio>
#include <map>

bool isvalid(int n) {

	std::map<int, int> numbers;
	int digit;
	while(n > 0) {
		digit = n % 10;
		numbers[digit]++;
		if (numbers[digit] > 1)
			return false;
		n /= 10;
	}

	return true;
}

int main() {
	
	int n, m, count;

	while (scanf("%d %d", &n, &m) != EOF) {

		count = 0;
		for (register int i = n; i <= m; ++i)
		{
			if (isvalid(i))
				count++;
		}

		printf("%d\n", count);
	}
}
