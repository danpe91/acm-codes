#include <cstdio>
#include <map>
std::map<int, int> table;

bool turn_number(const int number) {

	int turned_number = 0x0;
	int n = number;

	while (n) {

		turned_number *= 10;
		turned_number += (n % 10);
		n /= 10;
	}

	table[number] = ((turned_number > number)?(1):(-1));
	return (turned_number > number);
}

int main() {

	int n = 0x0;
	while (scanf("%d", &n) != EOF)
	{
		printf("%s\n", ((table[n])?((table[n] == 1)? ("YES"):("NO")):(turn_number(n)? ("YES"):("NO"))));
	}
	

}
