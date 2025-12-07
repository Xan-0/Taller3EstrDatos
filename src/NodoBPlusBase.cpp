#include "NodoBPlusBase.h"

NodoBPlusBase::NodoBPlusBase(int* claves, int orden, bool es_hoja){
    this -> claves = claves;
    this -> orden = orden;
    this -> es_hoja = es_hoja;
}

int NodoArchivo::get_orden(){ return this -> orden; }
int *NodoArchivo::get_claves(){ return this -> claves; }
bool NodoArchivo::get_es_hoja(){ return this -> es_hoja; }
void NodoArchivo::set_orden(int orden){ this -> orden = orden; }
void NodoArchivo::set_claves(int *claves){ this -> claves = claves; }
void NodoArchivo::set_es_hoja(bool es_hoja){ this -> es_hoja = es_hoja; }