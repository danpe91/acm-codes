#include <iostream>

using namespace std;

long long getBalls(long long floorsparam) {

	return floorsparam == 1? 1 : (floorsparam * floorsparam) + getBalls(floorsparam - 1);
}

int main() {
	
	long long floors;
	while(cin>>floors && floors != 0 && !cin.eof()) {

		cout << getBalls(floors) << endl;
	}
}