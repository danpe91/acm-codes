#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


long long reverseNumber(long long number) {

	long long reverseN = 0;

	while(number > 0) {
		reverseN = (reverseN * 10) + (number % 10);
		number /= 10;
	}

	return reverseN;
}

int main() {
	
	int n;
	cin>>n;
	vector<long long> numbers(n), reversedNumbers(n);

	for (int i = 0; i < n; i++) {
		
		cin>>numbers[i];
		reversedNumbers[i] = reverseNumber(numbers[i]);
	}

	sort(reversedNumbers.begin(), reversedNumbers.end());
	for (int i = 0; i < n; i++) {
		cout<<reversedNumbers[i]<<endl;
	}

}