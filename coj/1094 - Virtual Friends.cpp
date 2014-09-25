#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef vector<int> vi; 

vi pset;

void initSet(int N) {
	pset.assign(N, 0);

	for (int i = 0; i < N; ++i)
	{
		pset[i] = i;
	}
}

int findSet(int i) {
	return ((pset[i] == i)? (i) : (pset[i] = findSet(pset[i])));
}

bool isSameSet(int i, int j) {
	return findSet(i) == findSet(j);
}

void unionSet(int i, int j) {
	pset[findSet(j)] = findSet(i);
}

int main() {

	int t = 0, f = 0, index = 0;
	string name1, name2;
	cin >> t;

	while (t--) {
		cin >> f;
		
		index = 0;
		map<string, int> relations;
		map<int, int> sizes;

		initSet((2 * f) + 1);
		while(f--) {
		
			cin >> name1 >> name2;
			
			if (!relations[name1])	{	relations[name1] = ++index;	sizes[relations[name1]] = 1;	}
			if (!relations[name2])	{	relations[name2] = ++index;	sizes[relations[name2]] = 1;	}

			if (!isSameSet(relations[name1], relations[name2])) {

				sizes[findSet(relations[name1])] += sizes[findSet(relations[name2])];
				unionSet(relations[name1], relations[name2]);
			}
			cout << sizes[findSet(relations[name1])] << endl;
		}
	}
}
