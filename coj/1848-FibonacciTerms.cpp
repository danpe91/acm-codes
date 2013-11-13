#include <iostream> 
typedef long long ll;
using namespace std;

ll f(ll n) {
	if (n<2)	return n < 1 ? 0 : n;
	else return f(n-1) + f(n-2);
}

int main() {

	int t;
	ll fib;
	cin>>t;

	for (int i = 0; i < t; i++) {
		cin>>fib;
		cout<<"calculando";
		cout<<f(fib - 2)<<" "; cout<<f(fib - 1)<<" "<<f(fib)<<endl;
	}
}