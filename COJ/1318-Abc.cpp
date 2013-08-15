#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

#define PB push_back

using namespace std;

struct number {
	int num;
	char letter;
};

bool sortNumber(number i, number j) {

	return i.num < j.num;
}

vector<number> assignnumbers(vector<number> nums) {

	char let = 'A';
	for ( int i = 0; i < 3; i++, let++)
		nums.at(i).letter = let;

	return nums;
}



void printOrdered(string order, vector<number> nums) {

	vector<int> v;
	for ( int i = 0; i < order.size(); i++) {
		for ( int j = 0; j < order.size(); j++) {

			if (order.at(i) == nums.at(j).letter) {
				v.PB(nums.at(j).num);
				break;
			}
		}
	}

	cout << v.at(0) << " " << v.at(1) << " " << v.at(2) << endl;
}

int main() {

	string letters;

	vector<number> numbersvector;

	for ( int i = 0; i < 3; i++) {

		number n;
		cin >> n.num;
		numbersvector.PB(n);
	}
	cin >> letters;
	sort(numbersvector.begin(), numbersvector.end(), sortNumber);

	numbersvector = assignnumbers( numbersvector);

	printOrdered(letters, numbersvector);

	
}