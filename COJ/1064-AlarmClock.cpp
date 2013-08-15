#include <iostream>

using namespace std;

int getminutes(int h1, int m1, int h2, int m2) {
	
	int finalhours, finalminutes;
	
	if ( h1 > h2 )
		h2 += 24;
	finalhours = h2 - h1;

	if ( m1 > m2 ) {

		m2 += 60; finalhours--;
	}

	finalminutes = m2 - m1;

	if ( finalhours < 0)
		finalhours += 24;

	return (finalhours * 60) + finalminutes;
	
}

bool isValid(int h1, int m1, int h2, int m2) {

	return h1 > 0 ||
			h2 > 0 ||
			m1 > 0 ||
			m2 > 0;
}

int main() {
	
	int h1, m1, h2, m2;
	cin >> h1 >> m1 >> h2 >> m2;
	while (isValid(h1, m1, h2, m2)) {

		cout << getminutes(h1, m1, h2, m2)  << endl;
		cin >> h1 >> m1 >> h2 >> m2;
	}

}