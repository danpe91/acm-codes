#include <iostream>

using namespace std;

int main() {

	double v = 0.0, t = 0.0, a = 0.0, s = 0.0;

	while(cin >> v >> t, !cin.eof()) {

		a = ((t) ? (v / t) : (0));
		t *= 2.0;
		s = 0.5 * a * (t * t);

		cout << s << endl;
	}
}
