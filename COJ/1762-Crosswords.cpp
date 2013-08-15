#include <iostream>

using namespace std;

int main() {

	string a, b;
	int x = -1, y = string::npos;
	cin >> a >> b;

	while ( y == string::npos) {
		y = b.find(a.at(++x));
	}
	for (register int i = 0; i < b.size(); i++) 
	{
		for (register int j = 0; j < a.size(); j++)
		{
			if ( j == x) {
				cout << b.at(i);
				continue;
			} 
			if ( i == y) {
				cout << a.at(j);
			} else {
				cout << ".";
			}
		}
		cout << endl;
	}
}
