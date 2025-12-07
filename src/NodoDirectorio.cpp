#include "NodoDirectorio.h"

NodoDirectorio::NodoDirectorio(int id, vector<int> *padres, vector<int> *hijos){
    NodoGrafo(id, padres);
    this -> hijos = hijos;
}

int *NodoDirectorio::lista_hijos(){ return this -> hijos; }
void NodoDirectorio::set_hijos(vector<int> *hijos){ this -> hijos = hijos; }