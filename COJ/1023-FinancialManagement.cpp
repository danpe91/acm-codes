#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double balances[12];
	double sum = 0;
	for (int i = 0; i < 12; i++) {

		cin>>balances[i];
		sum += balances[i];
	}

	cout<<'$'<<(sum /12.0)<<endl<<setprecision(2);
} 