#include <iostream>
#include <vector>

using namespace std;

long long binario(long long n) {
	if(n<2)	return n;
	else
		return n%2 + (binario(n/2))*10;
}

int main() {

	int t;
	long long pi;
	cin>>t;
	for (int a = 0; a < t; a++) {

		vector<int> binaryDishes;
		cin>>pi;
		long long binaryPi = binario(pi);

		while (binaryPi != 0) {
			binaryDishes.push_back(binaryPi % 10);
			binaryPi /= 10;
		}
		for ( int i = 0; i < binaryDishes.size(); i++) {
			
			if (binaryDishes[i] == 1) {
				if ( i == (binaryDishes.size() - 1))
					cout<<(i);
				else
					cout<<(i)<<" ";
			}
		}
		cout<<'\n';
	}

}
