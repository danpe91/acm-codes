#include <string.h>
#include <fstream>
#include "grafo_heap.h"
using namespace std;
 
grafo obtenerGrafo (char * nombre){
    int tam;                            //Tamaño del grafo (número de nodos)
    int peso;                       //El peso de cada nodo
   const int TOPE_LEC = 1000;   //Tamaño máximo que va a leer en cada linea.
   char vector_aux[TOPE_LEC];   //Vector que almacenará el contenido de cada linea.
//Contador de las lineas, puesto que la que nos interesa es la 4 y seguir hasta las 7
   int cont_line=0;            
   char * c;            //Variable que almacenará el tamaño de la matriz de adyacencia.
 
   ifstream fichero;// Abro el fichero.
   fichero.open(nombre);
   if(!fichero){
       cerr << "Se ha producido un error al abrir el fichero: " << nombre;
       exit(1);
   }
 
//Recorro hasta quedarme en la linea 7 para
//despues leer directamente la matriz de adyacencia
   while (cont_line < 7){
       fichero.getline(vector_aux, TOPE_LEC);
       cont_line++;
       if (cont_line == 4){ //La linea 4 está la dimensión.
           c = strchr(vector_aux, ':')+1;
           tam = atoi(c);
       }
   }
 
 
   grafo G(tam);      //Creo el grafo con el tamaño.
 
    //Asigno los pesos dados por la matriz de adyacencia
   for (int i = 0; i < tam; i++)
       for (int j = 0; j < tam; j++){
           fichero >> peso;  G.asignar_peso(i,j,peso);
       }
 
   fichero.close();
 
   return G;
}
 
 
void dijkstra(grafo & G, vertice s){
    vertice u;
    vector<vertice> P(G.size(), -1);      //Vector de soluciones.
    vector<distancia> D(G.size(),INFINITO);  // Vector de distancias
    heap Q(G.size());
    D[s]=0; //La distancia hasta el mismo es cero.
    P[s] = s; //Su camino es el mismo.
 
    for (vertice i = 0 ; i < G.size() ; i++ )
 //Relleno el heap.
        Q.insert(D[i],i);
 
    //Para cada nodo actualizo su peso buscando y lo introduzco en el heap actualizado
    while (!Q.empty()) {
        u = Q.erase_min().second;
        // Para cada nodo adyacente al vertice actual
        for ( vertice v=G.begin_ady(u);  v !=G.end_ady(u);  v++) {
            if (D[v] > D[u] + G.devolver_peso(u,v)){
                D[v] = D[u] + G.devolver_peso(u,v);
                P[v] = u;
                Q.update_heap(D[v], v);
            }
        }
    }
 
    //Mostramos el vector D de distancia.
    cout << "El vector de distancias es:\n";
    for (vertice i = 0 ; i < G.size() ; i++ )
        cout << D[i] << " - ";
 
    //Mostramos el vector P de distancia.
    cout << "\n\nEl vector de soluciones es:\n";
    for (vertice i = 0 ; i < G.size() ; i++ )
        cout << P[i] << " - ";
 
 
}
 
 
 
int main(int argc,char** argv){
 
  grafo G(obtenerGrafo(argv[1]));
 
  vertice org=3;
  cout << "Tamaño del Grafo"  << G.size() << endl;
  cout << "Llamo a Dijkstra (origen) " << org <<  endl << endl << endl;
  dijkstra(G,org);
 
}