#include <iostream>
#include <string>

using namespace std;

void printreversed(string word, int g) {

	while (!word.empty()) {

		string subword = word.substr(0, g);
		string::reverse_iterator it;
		for (it = subword.rbegin(); it < subword.rend(); it++) {
			cout << *it;
		}
		
		word.erase(0, g);

	}
}

int main() {
	
	int g;
	string phrase;

	while ( (cin >> g), g != 0) {

		cin >> phrase;
		printreversed(phrase, phrase.size() / g);
		cout << endl;
	}
}