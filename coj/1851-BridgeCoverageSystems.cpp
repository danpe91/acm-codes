#include <cstdio>
#include <vector>

using namespace std;

int main() {
	
	vector<int> towers;
	int n, height, max = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {

		scanf("%d", &height);
		if ( max < height)
			max = height;

		towers.push_back(height);
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", max - towers[i]);


}