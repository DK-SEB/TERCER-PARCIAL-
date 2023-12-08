#include <iostream>
struct Nodo {  // Se define la estructura del nodo
    int valor;
    Nodo* HIJO_izq;
    Nodo* HIJO_der;

    Nodo(int val) : valor(val), HIJO_izq(nullptr), HIJO_der(nullptr) {} //  Se declara un constructor para inicializar
};                                                                      //  el nodo con un valor y los punteros a null

int main() {
   
    Nodo* raiz =new Nodo(1); // Declararamos el nodo raiz

    Nodo* nodo1 =new Nodo(2); // Declararamos el resto de nodos siguientes para enlazarlos según las instrucciones
    raiz->HIJO_izq = nodo1;

    Nodo* nodo2 =new Nodo(3);
    raiz->HIJO_der = nodo2;

    Nodo* nodo3 =new Nodo(4);
    nodo1->HIJO_izq = nodo3;

    Nodo* nodo4 =new Nodo(5);
    nodo1->HIJO_der = nodo4;

    Nodo* nodo5 =new Nodo(6);
    nodo2->HIJO_izq = nodo5;

    Nodo* nodo6 =new Nodo(7);
    nodo2->HIJO_der = nodo6;

    std::cout << "ARBOL BINARIO:" << std::endl;  // Aqui se muestra el arbol binario xd  
    std::cout << "         " << raiz->valor << std::endl;
    std::cout << "        / \\" << std::endl;
    std::cout << "       " << nodo1->valor << "   " << nodo2->valor << std::endl;
    std::cout << "      / \\  / \\" << std::endl;
    std::cout << "     " << nodo3->valor << " " << nodo4->valor << " " << nodo5->valor << " " << nodo6->valor << std::endl;

    return 0;
}
