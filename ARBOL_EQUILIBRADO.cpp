#include <iostream>
#include <queue>
struct Nodo { // Se define la estructura del nodo
    int valor; 
    Nodo* HIJO_IZQ;
    Nodo* HIJO_DER;

    Nodo(int val) : valor(val), HIJO_IZQ(nullptr), HIJO_DER(nullptr) {}  //  Se declara un constructor para inicializar el nodo con un valor y los punteros a null                                                                    
};

void agregarNodoEquilibrado(Nodo*& raiz, int valor) { // Se establece una funcion para agergar el nodo de manera equilibrada al arbol
    if (raiz == nullptr) {
        raiz = new Nodo(valor); // Si la raiz es nula se crea un nuevo nodo con el valor que se  proporcione
        return;
    }

    std::queue<Nodo*> cola;
    cola.push(raiz);

    while (true) {
        Nodo* nodoActual = cola.front();
        cola.pop();

        if (nodoActual->HIJO_IZQ == nullptr) { // En dado caso si no hay hijo izquierdo se crearara un nuevo
            nodoActual->HIJO_IZQ = new Nodo(valor);
            break;
        } else if (nodoActual->HIJO_DER == nullptr) {
            nodoActual->HIJO_DER = new Nodo(valor); // En dado caso si no hay hijo derecho se creara uno nuevo 
            break;
        } else {
            cola.push(nodoActual->HIJO_IZQ); // Si ambos hijos existen se agregaran ambos hijos a la cola
            cola.push(nodoActual->HIJO_DER);
        }
    }
}

void imprimirArbol(Nodo* raiz) { // Se declara la funcion para imprimir el arbol en orden
    if (raiz != nullptr) {
        imprimirArbol(raiz->HIJO_IZQ);
        std::cout << raiz->valor << " ";
        imprimirArbol(raiz->HIJO_DER);
    }
}

int main() {
    Nodo* raiz = nullptr; // Declararamos el nodo raíz
    
    agregarNodoEquilibrado(raiz, 1);
    agregarNodoEquilibrado(raiz, 2);
    agregarNodoEquilibrado(raiz, 3);
    agregarNodoEquilibrado(raiz, 4); // Agregamos los respectivos nodos de manera equilibrada 
    agregarNodoEquilibrado(raiz, 5);
    agregarNodoEquilibrado(raiz, 6);
    agregarNodoEquilibrado(raiz, 7);

    // Imprimir el árbol en orden
    std::cout << "ARBOL BINARIO EQUILIBRADO :):" << std::endl; // Imprimimos el arbol en orden
    imprimirArbol(raiz);
    std::cout << std::endl;
    
    return 0;
}
