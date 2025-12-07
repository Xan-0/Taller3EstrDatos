#include "NodoBInterno.h"

NodoBInterno::NodoBInterno(int* claves, int orden, bool es_hoja, NodoBPlusBase** punteros){
    NodoBPlusBase(claves, orden, es_hoja);
    this -> punteros = punteros;
}

int NodoBInterno::buscar_siguiente(){
    
}
NodoBPlusBase** NodoBInterno::get_punteros(){ return this -> punteros;}
void NodoBInterno::set_punteros(NodoBPlusBase** punteros){ this -> punteros = punteros;}