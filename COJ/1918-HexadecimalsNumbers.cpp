#include <iostream>
typedef long long ll;

using namespace std;

bool isvalid(string n) {

	
	return true;
}

int main() {
	
	int t;
	string n; int count;
	//cin >> t;
	//for ( int a = 0; a < t; a++) {
		count = 0;
		//cin >> n;
		//cout << n << endl;
		n = 10;
		for ( ll i = 1; i <= n; i += ( i % 10 == 0)? 1 : 9) {

			if ( isvalid(i) )
				count++;
		}

		cout << count << endl;
	//}

}