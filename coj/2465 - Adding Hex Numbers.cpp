#include <cstdio>
#include <cstring>
#include <map>
#define MAX(x,y)	((x > y)? (x) : (y))
std::map<char, int> values;

void initialize() {
	values[0] = 0;
	values['0'] = 0;
	values['1'] = 1;
	values['2'] = 2;
	values['3'] = 3;
	values['4'] = 4;
	values['5'] = 5;
	values['6'] = 6;
	values['7'] = 7;
	values['8'] = 8;
	values['9'] = 9;
	values['A'] = 10;
	values['B'] = 11;
	values['C'] = 12;
	values['D'] = 13;
	values['E'] = 14;
	values['F'] = 15;
}

int main() {

	initialize();
	int n = 0, carry = 0, count = 0;
	char n1[300], n2[300];

	scanf("%d", &n);

	while (n--) {
		count = 0;
		carry = 0;
		scanf("%s %s", n1, n2);
		int s1 = strlen(n1), s2 = strlen(n2);
		int max_size = MAX(s1, s2);
		s1--;	s2--;
		
		for (int i = 0; i < max_size; ++i) {
			if ((values[(((s1 - i) < 0)? (0) : (n1[s1 - i]))] + values[(((s2 - i) < 0)? (0) : (n2[s2 - i]))] + carry) > 15) {
				carry = 1;
			} else {
				carry = 0;
			}
			count += carry;
		}
		printf("%d\n", count);
	}
}
