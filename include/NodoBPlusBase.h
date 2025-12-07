#pragma once

class NodoBPlusBase {
private:
    int* claves; // vector de ids de NodoGrafo
    int orden; // factor m de árbol
    bool es_hoja; // indica si es nodo interno o hoja del árbol
public:
    NodoBPlusBase(int* claves, int orden, bool es_hoja);
    
    int *get_claves();
    int get_orden();
    bool get_es_hoja();
    void set_claves(int *claves);
    void set_orden(int orden);
    void set_es_hoja(bool es_hoja);
};