#include <cstdio>
#include <cmath>
typedef long long ll;
using namespace std;

int main() {
	
	ll x, max, topb;

	while ( scanf("%lld",&x) != EOF && x != 0) {
		
		max = 1;
		topb  = (double)sqrt(x);
		
		while ( topb > 1 ) {	
			ll pot;
			for ( ll i = 1; pot = pow(topb, i), pot <= x; i++) {
				
				if ( x == pot) 
					max = max < i? i : max;
				
			}

			topb--;
		}

		printf("%lld\n", max);

	}

}