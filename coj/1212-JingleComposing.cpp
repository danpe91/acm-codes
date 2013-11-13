#include <iostream>
#define N 7
using namespace std;

const int durations[N] = {64, 32, 16, 8, 4, 2, 1};

int getValue(char n) {

	if(n == 'W')	return durations[0];
	if(n == 'H')	return durations[1];
	if(n == 'Q')	return durations[2];
	if(n == 'E')	return durations[3];
	if(n == 'S')	return durations[4];
	if(n == 'T')	return durations[5];
	if(n == 'X')	return durations[6];
}

bool correctMeasure(string measure) {

	int duration = 0;

	for ( int i = 0; i < measure.length(); i++) {
		
		duration += getValue(measure.at(i));
	} 
	return duration == 64;
}

int main() {

	
	string composition;
	
	while ( cin >> composition && composition.compare("*") != 0) {
		int count = 0, position = -1;

		position = composition.find("/", position + 1);
		while(position != (composition.length() - 1) && position != string::npos) {

			int endposition = composition.find("/", position + 1);
			string measure = composition.substr(position + 1, endposition - position - 1);
			if (correctMeasure(measure))
				count++;
			position = composition.find("/", position + 1);
		}
		cout << count << endl;
	}

}