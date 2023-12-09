#include <iostream>
#include <vector>
#include <list>

using namespace std;

class grafodirigido { //Creamos la clase grafo dirigido 
public:
    grafodirigido(int vertices) : numvertices(vertices), listaAdyacencia(vertices) {} 

    void agregararista(int origen, int destino) {
        listaAdyacencia[origen].push_back(destino);
    }

    void mostrargrafo() {
        for (int i = 0; i < numvertices; ++i) {
            cout << "VERTICE" << i << ": ";
            for (const auto &adyacente : listaAdyacencia[i]) {
                cout << adyacente << " ";
            }
            cout << endl;
        }
    }

private:
    int numvertices;                      //Se establece el numero de vertices
    vector<list<int>> listaAdyacencia;    // Lista de adyacencia
};

int main() {
   
    grafodirigido grafo(5);     // Se crea un grafo dirigido con 5 vertices

    grafo.agregararista(0, 1);  // Se agregan algunas aristas
    grafo.agregararista(0, 4);
    grafo.agregararista(1, 2);
    grafo.agregararista(1, 3);
    grafo.agregararista(2, 3);
    grafo.agregararista(3, 4);

    grafo.mostrargrafo();   // Aqui se muestra el grafo
    return 0;
}
