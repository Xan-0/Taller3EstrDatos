#include <iostream>
#include "NodoGrafo.h"

//SISTEMA, FASE DE PRUEBAS.

int main(){
    vector<int> v = {1,2,3,4,5};
    vector<int> *vp = &v;
    NodoGrafo *nodo_grafo = new NodoGrafo(1,vp);
    
    cout << nodo_grafo -> getId() << endl;
    
    delete nodo_grafo;
    return 0;
}