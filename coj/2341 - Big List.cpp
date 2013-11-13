#include <iostream>
#include <map>

using namespace std;

int main() {

	int n = 0, m = 0, value = 0;
	string key;
	map<string, int> operations;

	cin >> n >> m;

	while(n--) {

		cin >> key >> value;
		operations[key] = value;
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> key;
		if (operations[key]) {
			cin >> value;
			cout << ((operations[key] == value)? ("ok"): ("wrong")) << endl;
		} else {
			cout << "not found\n";
		}
	}
}
