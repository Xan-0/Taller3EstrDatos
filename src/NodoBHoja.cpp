#include "../include/NodoBHoja.h"

NodoBHoja::NodoBHoja(int* claves, int orden, bool es_hoja,
NodoGrafo** datos, NodoBHoja* siguiente_hoja){
    
    NodoBPlusBase(claves, orden, es_hoja);
    this -> datos = datos;
    this -> siguiente_hoja = siguiente_hoja;
}

NodoGrafo** NodoBPlusBase::get_datos(){ return this -> datos; }
NodoBHoja* NodoBPlusBase::get_siguiente_hoja(){ return this -> siguiente_hoja; }
void NodoBPlusBase::set_datos(NodoGrafo** datos){ this -> datos = datos; }

void NodoBPlusBase::set_siguiente_hoja(NodoBHoja* siguiente_hoja){ this -> siguiente_hoja = siguiente_hoja; }
