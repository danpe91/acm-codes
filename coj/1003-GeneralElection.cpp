#include <iostream>

using namespace std;

int main() {

	int t, m, n;
	cin>>t;
	
	int finalresults[t];
	for ( int i = 0; i < t; i++) {

		cin>>n>>m;
		int results[m][n];
		for (int j = 0; j < m; j++) {
			for ( int k = 0; k < n; k++) {
				cin>>results[j][k];
			}
		}

		int max = 0;
		int returnValue = 0;

		for (int y = 0; y < n; y++) {
			int sum = 0;
			for (int x = 0; x < m; x++) {

				sum += results[x][y];
			}

			if ( sum > max) {
				max = sum;
				returnValue = y + 1;
			}
		}
		finalresults[i] = returnValue;

		cout<<finalresults[i]<<endl;
	}
}
