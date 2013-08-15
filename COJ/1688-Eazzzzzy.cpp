#include <iostream>
#include <iomanip>

using namespace std;

string fillFigure(int length) {

	string word = "";

	for (int i = 0; i < length; ++i) {
		
		word.append("*");
	}

	return word;
}

void printTriangle() {

	int h;
	cin >> h;
	string chars = "*";

	for (int i = 0; i < h; i++){
		cout << setw(h + i) << chars<<endl;
		chars.append("**");
	}
}

void printParallelogram() {

	int w, h;
	cin >> w >> h;
	string word = fillFigure(w);

	for (int i = (h - 1); i >= 0; i--) {
		
		cout << setw(i + word.size()) << word << endl;
	}
}

void printRectangle() {

	int w, h;
	cin >> w >> h;
	string word = fillFigure(w);

	for (int i = (h - 1); i >= 0; i--) {
		
		cout << word << endl;
	}
}

int main() {
	
	int option;

	while (cin >> option, option != -1) {

		switch(option) {

			case 1: printTriangle();
					cout << endl;
					break;
			case 2: printParallelogram();
					cout << endl;
					break;
			case 3: printRectangle();
					cout << endl;
					break;
		}
	}
	
}