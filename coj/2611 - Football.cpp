#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct game_score {

	int s, r, diff;
	game_score() {s = 0; r = 0; diff = 0;}
	game_score(int _s, int _r)
	{
		s = _s;
		r = _r;
		diff = r - s;
	}
};

bool comp(const struct game_score a, const struct game_score b) {

	return (a.diff < b.diff);
}

int main() {

	int n = 0, g = 0;

	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		
	}
}