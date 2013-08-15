#include <iostream>
#include <string>

using namespace std;

int square(int a) {
	
	return a * a;
}

int rectangle(int a, int b) {

	return a * b;
}

int main() {
	
	string figure;
	int a, b;
	cin >> figure;

	if (figure.compare("square") == 0) {

		cin >> a;
		cout << square(a) << endl;
	} else {

		cin >> a >> b;
		cout << rectangle(a, b) << endl;
	}
}