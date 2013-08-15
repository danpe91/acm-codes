#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool isTriplet(int x, int y, int z) {

	return ((pow(x, 2) + pow(y, 2)) == pow(z,2));
}

int main() {
	
	int a, b, c;

	while ((cin>>a)  && a!= 0) {

		cin>>b>>c;
		vector<int> vector;
		vector.push_back(a);
		vector.push_back(b);
		vector.push_back(c);
		sort(vector.begin(), vector.end());
		
		if(isTriplet(vector[0], vector[1], vector[2]))
			cout<<"right\n";
		else
			cout<<"wrong\n";

	}
}