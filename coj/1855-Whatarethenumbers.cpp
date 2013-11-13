#include <iostream>
#include <vector>

using namespace std;

bool exists(vector<long long> v, int number) {
	for ( int i = 0; i < v.size(); i++) {
		if (v[i] == number)
			return true;
	}
	return false;
}

void printReapeated(vector<long long> v) {

	if ( v.empty()) {
		cout<<"Not found!\n";
	}
	else {
		for (int i = 0; i < v.size(); i++) {
			cout<<v[i]<<endl;
		}
	}
}

int main() {

	int t;
	cin>>t;

	for (int a = 0; a < t; a++) {
		int n;
		cin>>n;
		vector<long long> ki;
		vector<long long> kirepeated;
		for ( int i = 0; i < n; i++) {
			int number;
			cin>>number;
			if(!exists(ki, number))
				ki.push_back(number);
			else
				kirepeated.push_back(number);
		}

		printReapeated(kirepeated);
	}
}