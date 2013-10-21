#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#define PB push_back
#define vc vector<contestant>

using namespace std;

struct contestant {

	char name[70];
	int g, s, b;

	contestant() {
		g = 0;
		s = 0;
		b = 0;
	}

	contestant(char * _name, int _g, int _s, int _b) {
		strcpy(name, _name);
		g = _g;
		s = _s;
		b = _b;
	}
};

bool sorting(contestant i, contestant j) {

	int i_size = strlen(i.name);
	int j_size = strlen(j.name);
	return ((i.g == j.g)?
		((i.s == j.s)?
			((i.b == j.b)?
				(lexicographical_compare(i.name, i.name + i_size, j.name, j.name + j_size))
				:	(i.b > j.b))
			:	(i.s > j.s))
		:	(i.g > j.g));
}

int main() {

	vc contestants;
	char name[70];
	int g = 0, s = 0, b = 0;

	while (cin >> name) {

		if (name[0] == '@' || name[0] == '#') {

			sort(contestants.begin(), contestants.end(), sorting);

			for (register int i = 0; i < contestants.size(); i++) {
				cout << contestants[i].name << endl;
			}

			if (name[0] == '@') {
				cout << '@' << endl;
				contestants.clear();
			} else {
				return 0;
			}
		} else {
			cin >> g >> s >> b;
			contestants.PB(contestant(name, g, s, b));
		}
	}

}
