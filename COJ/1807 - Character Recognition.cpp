#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int n = 0, r = 0, a = 0, size = 0, fractional = 0;
	double ratio = 0.0;
	string line;

	cin >> n;
	cin.ignore(1);
	while (n--) {

		r = 0; a = 0;

		while(getline(cin, line), line[0]) {

			size = line.size();
			a += size;
			for (int i = 0; i < size; ++i) {
				
				if(line[i] != '#') {
					r++;
				}
			}
		}

		ratio = (double)r / (double)a;
		ratio *= 100;
		fractional = !(ratio == ((int)ratio));
		ratio += 0.01;

		printf("Efficiency ratio is %.*lf%%.\n", fractional, ratio);
	}
}