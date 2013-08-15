#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
	return b?gcd(b, a%b):a;
}

int main() {

	int n, cont = 0;

	cin >> n;
	for ( int i = 1; i <= n; i++)
		if (gcd(i,n) == 1)
			cont++;

	cout << cont << endl;
}