#pragma once

class NodoBHoja: public NodoBPlusBase {
private:
    NodoGrafo** datos; // vector del tipo NodoGrafo*
    NodoBHoja* siguiente_hoja; // puntero del tipo NodoBHoja*
public:
    NodoBHoja(int* claves, int orden, bool es_hoja, NodoGrafo** datos, NodoBHoja* siguiente_hoja);
    
    NodoGrafo** get_datos();
    NodoBHoja* get_siguiente_hoja();
    void set_datos(NodoGrafo** datos);
    void set_siguiente_hoja(NodoBHoja* siguiente_hoja);
};