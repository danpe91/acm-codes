#include <iostream>
typedef unsigned long long ll;

using namespace std;

bool containssix(ll number) {
	
	while ( number > 0) {
		if ((number % 10) == 6)
			return true;
		number /= 10;
	}
	return false;
}

bool ismultipleofsix(ll number) {

	return (number % 6) == 0;
}

bool sumismultipleofsix(ll number) {

	ll sum = 0;

	while ( number > 0) {
		sum += number % 10;
		number /= 10;
	}

	return ismultipleofsix(sum);
}

bool isevil(ll number) {

	return containssix(number) && ismultipleofsix(number) && sumismultipleofsix(number);
}

int main() {
	
	ll n;

	while((cin >>n), !cin.eof()) {
		cout << ((isevil(n))? ("EVIL"): ("GOOD")) << endl;
	}
}
