#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double getHeight(long long radius) {

	double base = radius / 2.0;
	
	return sqrt((radius * radius) - (base * base));
}



int main() {

	int t;	long long radio;
	cin>>t;

	for ( int i = 0; i < t; i++) {

		cin>>radio;
		double height = getHeight(radio);

		double area = (radio * height) / 2;

		cout<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<< setprecision(2)<<area * 6.0 << endl;
	}

}