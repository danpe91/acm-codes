#include <iostream>
#include <map>
using namespace std;
int main() {

	int t;
	cin >> t;

	while ( t--) {

		string letters;

		cin >> letters;
		map<char, int> lettersmap;
		int size = letters.size();

		for ( register int i = 0; i < size; i++) {
			lettersmap[letters[i]]++;
		}
		cout << lettersmap.size() << endl;
	}
}
