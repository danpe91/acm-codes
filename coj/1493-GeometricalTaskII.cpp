#include <iostream>
#include <iomanip>
#define PI 3.14

using namespace std;

double circlearea(double radio) {

	return (PI * (radio*radio));
}

double trianglearea(double base, double height) {

	return ((base * height) / 2);
}

double rhombusarea(double D, double d) {

	return (trianglearea(d, D / 2) * 2);
}

int main() {

	string s;
	double n1, n2;
	cin >> s;

	if (s.compare("circle") == 0) {
		cin >> n1;
		cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << circlearea(n1) << endl;
	}else if (s.compare("triangle") == 0) {
		cin >> n1 >> n2;
		cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << trianglearea(n1, n2) << endl;
	} else {
		cin >> n1 >> n2;
		cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << rhombusarea(n1, n2) << endl;
	}
		
}

//cout<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<< setprecision(2)<<area * 6.0 << endl;