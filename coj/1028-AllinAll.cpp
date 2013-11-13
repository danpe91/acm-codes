#include <iostream>
#include <string>

using namespace std;

bool issubsequence(string s, string t) {
	
	int currentposition = -1;
	for ( int i = 0; i < s.size(); i++ ) {

		currentposition = t.find(s.at(i), currentposition + 1);
		if ( currentposition == string::npos)
			return false;
	}

	return true;

}

int main() {
	
	string s ,t;

	
	while ( cin >> s && !cin.eof()) {

		cin >> t;

		if ( issubsequence(s, t) )
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	
}