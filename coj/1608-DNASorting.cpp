#include <iostream>
#include <vector>
#include <algorithm>
#define PB push_back
using namespace std;

struct dna {
	
	string dnastring;
	int measure;
};

bool bymeasure(dna i, dna j) {

	return i.measure < j.measure;
}

int getmeasure(string dnaparam) {


	int measure = 0;

	for (int i = 0; i < dnaparam.size(); i++) {
		for (int j = i + 1; j < dnaparam.size(); j++) {
			
			if ((int)dnaparam.at(i) > (int)dnaparam.at(j))
				measure++;
		}
	}
	return measure;
}

int main() {
	
	int n, m;
	
	while(cin >> n >> m, (n != 0 && m != 0))  {
		vector<dna> dnas;
		for (int i = 0; i < m; ++i) {
			dna currentdna;
			cin >> currentdna.dnastring;
			currentdna.measure = getmeasure(currentdna.dnastring);
			dnas.PB(currentdna);
		}

		sort(dnas.begin(), dnas.end(), bymeasure);

		for (int i = 0; i < m; ++i) {
			cout << dnas[i].dnastring << endl;
		}
	}
}