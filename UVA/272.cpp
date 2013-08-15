#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int size = 0;
	bool closing = 0;
	string word;
	
	while (getline(cin, word), !cin.eof()) {
		
		size = word.length();

		for (int i = 0; i < size; ++i) {
			
			if (word[i] == '"') {
				cout << (closing ? "''" : "``");
				closing = !closing;
			} else {
				cout << word[i];
			}
		}
		cout << endl;
	}
}
