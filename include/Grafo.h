#pragma once
#include "NodoDirectorio.h"
#include "NodoArchivo.h"
#include "ArbolBPlus.h"

class Grafo {
private:
    NodoGrafo *raiz;
    ArbolBPLus *arbol;
public:
    Grafo(NodoGrafo *raiz);
    NodoGrafo *get_raiz();
    ArbolBPLus *get_arbolB();
    void set_raiz(NodoGrafo *raiz);
    void set_arbolB(ArbolBPLus *arbol);
    int calcular_espacio_ocupado(int id_directorio);
};