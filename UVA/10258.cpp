#include <iostream>

using namespace std;

struct sumbission {

	int contestant, problem, submission_time;
	char L;

	sumbission(int cont, int prob, int sub_time, char l) {

		contestant = cont;
		problem = prob;
		submission_time = sub_time;
		L = l;
	}
};

struct team {
	
	int contestant, solved, penalty_time;

	team(int cont, int solv, int penalty) {
		contestant = cont;
		solved = solv;
		penalty_time = penalty;
	}
};

bool compare(team a, team b) {

	if (a.solved != b.solved) {
		return a.solved < b.solved;
	} else if (a.penalty_time != b.penalty_time) {
		return a.penalty_time < b.penalty_time;
	} else {
		a.contestant < b.contestant;
	}
}

int main() {

	int t = 0;

	cin >> t;
	cin.getline(NULL, 0);cin.getline(NULL, 0);

	while (t--) {
		char line[12];
		while (cin.getline(line, 12), line[0] != 1) {
			cout << "aqui: " << (int)line[0] << endl;
		}

	}


}
