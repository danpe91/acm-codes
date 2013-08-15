#include <iostream>

using namespace std;

int busqueda(int i, int j,int tamano, char** terreno) {
	
	int otrocontador = 1;
	int m, n, aux = 0;
	int x = i;
	int y = j;

	while ( aux != 1) {

		for ( m = i; m < x; m++) {
			if (terreno[m][y] == '#')
				aux = 1;
		}

		for ( n = j; n < y; n++) {
			if(terreno[x][y]) aux = 1;
		}

		if(aux != 1) otrocontador++;
		if(x>tamano && y>tamano) break;
	}

	return otrocontador;
}

int main() {
	
	int cont = 0, n, aux = 0;

	cin>>n;
	char terreno[n][n];

	for ( int i = 0; i < n; i++)
		for ( int j = 0; i < n; j++)
			cin>>terreno[i][j];

	for ( int i = 0; i < n; i++) {
		for ( int j = 0; i < n; j++) {
			if (terreno[i][j] == '.')
				aux = busqueda(i, j, n, terreno);
				if (aux > cont)
					cont = aux;
		}
	}

	cout<< cont;
}