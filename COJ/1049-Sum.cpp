#include <iostream>
#include <cmath>
using namespace std;

int sum(int n) {

	if ( n <= 0)
		return n == 1? 1: sum(n+1) + n;
	return n == 1? 1: sum(n-1) + n;
}

int main() {

	int n;
	cin>>n;
	cout<<sum(n)<<endl;

}