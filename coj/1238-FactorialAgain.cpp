#include <iostream>

using namespace std;

int factorial (int number) {

	return number <= 2? number : number * factorial(number - 1);
}

int main() {

	int acm;

	while ( cin>>acm && acm != 0 && !cin.eof()) {

		int result = 0, i = 1;
		while (acm > 0) {

			int mod = acm % 10;
			result += mod * factorial(i);
			acm /= 10;
			i++;

		}
		cout << result << endl;

	}

}