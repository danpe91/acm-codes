#include <iostream>

using namespace std;
int main() {
	
	int n;
	
	while (( cin >> n), !cin.eof()) {
		int numbers[n];
		int aux = -1, result = 0, sum = 0, ones = 0;
		for (register int i = 0; i < n; ++i)
		{
			cin >> numbers[i];
			if (numbers[i]) {
				ones++;
				aux = i;
			}
		}

		if (ones == 1) {
			aux = ((aux % n) + 2);
			numbers[aux] = 1;
			result++;
		}

		for (register int i = 0; i <= n; ++i) {

			if (!numbers[(aux + i) % n])
				sum += 2;
			else {
				sum += 2;
				result += ((sum - 1) / 4);
				sum = 0;
			}
		}

		cout << (((aux) != (-1)) ?(result) : (n / 2)) << endl;
	}

}
