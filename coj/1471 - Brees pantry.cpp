#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>

inline void toLower(char *v) {
	int i = 0;
	while(v[i] != (char)00)
	{
		if(v[i] < 'a')
			v[i] += 32;
		i++;
	}
}

struct data {
	char name[5];
	char low[5];
	int n;
	data(char *c, int m)
	{
		strcpy(name,c);
		toLower(c);
		strcpy(low,c);
		n = m;
	}
};

inline bool comp(data a, data b) {
	if(a.n == b.n)
		return std::lexicographical_compare(b.low, b.low + 3, a.low, a.low + 3);
	return a.n < b.n;
}

int main() {
	
	int t = 0, n = 0, sum_number = 0;

	while(scanf("%d", &t), t != 0) {
		std::vector<data> cans;
		char label[5];
		sum_number = 2;
		for (register int i = 0; i < t; ++i) {
			
			scanf("%s %d", label, &n);
			cans.push_back(data(label, n));
		}

		std::sort(cans.begin(), cans.end(), comp);

		for (register int i = 0, index = ((t&1)? (1): (0)); i < t; ++i, index += sum_number) {
			
			printf("%s%c", cans.at(index).name, ((i == (t - 1))? '\n':' '));
			if (index >= (t - 2) && sum_number == 2) {
				index = t + 1;
				sum_number = -2;
			}
		}
	}
}
