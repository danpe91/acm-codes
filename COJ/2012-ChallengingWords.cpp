#include <cstdio>
#include <cstring>
#include <vector>
#define PB push_back

int getWeight(char * word) {

	int weight = 0;

	for ( int i = 0; i < strlen(word); i++) {
		if ( (word[i] >= 97) && (word[i] <= 'z') )
		weight += (word[i] - 97);
	}

	return weight;
}

int main() {

	char ch[1000];
	int currentMax = 0, index = 0, bigIndex = 0;
	std::vector<int> indexes;
	while(scanf("%s", ch) != EOF) {
		index++;

		if (getWeight(ch) == currentMax) {
			indexes.PB(index);
		}
		if (getWeight(ch) > currentMax) {
			currentMax = getWeight(ch);
			indexes.clear();
			indexes.PB(index);
		}
		
	}
	printf("%d\n", currentMax);
	for (int i = 0; i < indexes.size(); i++) {
		printf("%d\n", indexes.at(i));
	}
	
}
