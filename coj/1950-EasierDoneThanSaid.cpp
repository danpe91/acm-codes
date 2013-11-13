#include <iostream>

using namespace std;

bool isVowel(char posible) {

	return posible == 'a' || posible == 'e' || posible == 'i' || posible == 'o' || posible == 'u';
}

bool rule1(string word) {

	for ( int i = 0; i < word.length(); i++) {

		if (isVowel(word.at(i)))
			return true;
	}

	return false;
}

bool rule2(string word) {

	int vowels = 0, consonants = 0;

	for ( int i = 0; i < word.length(); i++) {

		if (isVowel(word.at(i))) {
			
			consonants = 0;
			if ( ++vowels == 3)
				return false;
		} else {

			vowels = 0;
			if ( ++consonants == 3)
				return false;
		}
			
	}

	return true;
}

bool rule3	(string word) {

	for ( int i = 1; i < word.length(); i++) {

		if (word.at(i - 1) == word.at(i) && !(word.at(i) == 'e' || word.at(i) == 'o'))
			return false;
	}

	return true;
}

bool passrules(string word) {

	return rule1(word) &&  rule2(word) &&  rule3(word);
}

int main() {
	
	string word;

	while ( (cin >> word) && (word.compare("end") != 0)) {

		cout << "<" << word << "> is" << (!passrules(word)? " not " : " ") << "acceptable." << endl;
	}
	
}