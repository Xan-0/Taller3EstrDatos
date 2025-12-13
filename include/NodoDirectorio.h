#pragma once
#include "NodoGrafo.h"

class NodoDirectorio: public NodoGrafo {
private:
    vector<int> *hijos;
public:
    NodoDirectorio(int id, vector<int> *padres, vector<int> *hijos);
    bool es_directorio() { return true; }
    int* lista_hijos();
    void set_hijos(vector<int> *hijos);
};
