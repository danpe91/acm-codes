#include <cstdio>
#include <string>
#include <sstream>

using namespace std;

string convertInt(int number) {

	std::stringstream ss;
	ss << number;
	return ss.str();
}

int getCount(string s, char letter) {

	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if ( s.at(i) == letter)
			count++;
	}
	return count;
}

int main() {
	
	int t = 0;
	int n1, n2;

	while (scanf("%d", &n1), n1 !=0) {

		scanf("%d", &n2);
		string numbers = "";
		for (register int i = n1; i <= n2; ++i) {

			numbers.append(convertInt(i));
		}

		printf("Case %d: ", ++t);
		for (register char i = '0'; i < '9'; i++) {

			printf("%c:%d ", i, getCount(numbers, i));
		}
		printf("%c:%d\n", '9', getCount(numbers, '9'));

	}
}


/*
 *	while (scanf("%d", &n1), n1 !=0) {
 *	
 *	scanf("%d", &n2);
 *	char numbers[2000] = "";
 *	t++;
 *	for (register int i = n1; i <= n2; ++i) {
 *		
 *		register char number[100];
 *		sprintf( number , "%d", i );
 *		strcat(numbers, number);
 *	}
 *
 *	printf("Case %d: ", t);
 *	for (register char i = '0'; i < '9'; i++) {
 *		
 *		printf("%c:%d ", i, getCount(numbers, i));
 *	}
 *	printf("%c:%d\n", '9', getCount(numbers, '9'));
 *	
 *	}
 */