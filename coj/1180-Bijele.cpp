#include <iostream>
#define N 6
using namespace std;

const int PIECES[N] = {1, 1, 2, 2, 2, 8};

int main() {
	
	int t;
	cin>>t;
	int currentPieces[t][N];
	int finalPieces[t][N];

	for (int a = 0; a < t; a++) {
		
		for ( int i = 0; i < N; i++) {

			cin>>currentPieces[a][i];
			finalPieces[a][i] = PIECES[i] - currentPieces[a][i];
		}

	}

	for (int a = 0; a < t; a++){
		for ( int i = 0; i < N - 1; i++)
			cout<<finalPieces[a][i]<<" ";
		cout<<finalPieces[a][N - 1];
		cout<<'\n';
	}


}