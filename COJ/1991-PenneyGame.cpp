#include <iostream>
#include <map>

using namespace std;
int main() {
	
	int cases, currentcase;
	cin >> cases;

	while ( cases--) {
	
		map<string, int> sequences;
		string dataset;
		cin >> currentcase;
		cin >> dataset;
		for (int i = 0; i < dataset.size() - 2; ++i)
		{
			sequences[dataset.substr(i, 3)]++;
		}
		cout << currentcase << " ";
		cout << sequences["TTT"] << " ";
		cout << sequences["TTH"] << " ";
		cout << sequences["THT"] << " ";
		cout << sequences["THH"] << " ";
		cout << sequences["HTT"] << " ";
		cout << sequences["HTH"] << " ";
		cout << sequences["HHT"] << " ";
		cout << sequences["HHH"] << endl;
	}
}

// TTT, TTH, THT, THH, HTT, HTH, HHT and HHH