#include <iostream>
typedef long long ll;

using namespace std;

ll n;

ll algorithm(ll number) {
	
	n++;
	return (number == 1) ? 1 : (number & 1) ? algorithm(3*number + 1)
	: algorithm(number / 2);
}

int main() {

	ll i, j, min, may, max;
	while((cin>>i>>j) && !cin.eof()) {
		max = 0;
		may = i;
		min = j;

		if ( i < j) {
			min = i; 
			may = j;
		}

		for ( ll a = min; a <= may; a++) {

			n = 0;
			algorithm(a);
			if ( n > max)
				max = n;
		}

		cout<<i<<" "<<j<<" "<<max<<endl;
	}

}