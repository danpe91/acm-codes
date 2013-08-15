#include <iostream>
#include <cstring>

using namespace std;
char * getHamming(char * s, int d) {

	char bitstring[1000];
	strcpy(bitstring, s);

	for (int i = 0; i < strlen(s); i++)	{
		if ( d > 0) {
			if (bitstring[i] == '1') {
				s[i] = '0';
				d--;
			}
		} else {
			break;
		}
	}

	for (int i = strlen(s) - 1; i >= 0; i--) {
		if (d > 0) {

			if (bitstring[i] == '0') {
				s[i] = '1';
				d--;
			}
		}
		else {
			break;
		}
	}
	return s;
}

int main() {
	
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)	{
		
		char s[1000];
		int d;
		cin >> s >> d;

		cout <<"Case #"<< i + 1 <<": " << getHamming(s, d) <<"\n";
	}
}
