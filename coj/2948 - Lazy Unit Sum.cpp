#include <iostream>
using namespace std;
int main()
{
	int t = 0, size = 0; unsigned long long sum = 0;
	string a;

	cin >> t;

	while(t--) {

		cin >> a;
		size = a.size();
		sum = 0;
		for (int i = 0; i < size; ++i)
		{
			sum += (a[i] - '0');

			while (sum > 9) {
				sum = ((sum % 10) + (sum / 10));
			}
		}
		cout << sum << endl;
	}
	return 0;
}
