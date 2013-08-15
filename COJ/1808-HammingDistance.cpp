#include <iostream>
#include <cstring>

using namespace std;

int getHamming(char * s, char * d) {

	int count = 0;
	for (register int i = 0; i < strlen(s); ++i) {
		
		if(s[i] != d[i])
			count++;
	}

	return count;
}

int main() {

	int t;
	char s[100], d[100];

	while (cin >> s, (s[0] != 'X')) {
		
		cin >> d;
		cout << "Hamming distance is " << getHamming(s, d) << ".\n";
	}
}