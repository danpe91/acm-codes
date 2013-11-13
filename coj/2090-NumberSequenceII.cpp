#include <iostream>

using namespace std;

int main() {
	
	int t;
	cin >> t;
	while ( t--) {

		int n, sum = 0, adding = 1;
		cin >> n;
		while ( sum < n) {
			sum += adding;
			adding++;
		}
		adding--;
		cout << (adding - (sum - n)) % 10 << ' ' << adding - (sum - n)<<  ' ' << adding <<endl;
		for ( int i = 1; i <= adding; i++) {
			cout << i << " ";
		}cout << '\t'<< adding << " - (" << sum << " - " << n<<")" << endl;
		// falta tomar en cuenta numeros de 2 digitos
	}
}