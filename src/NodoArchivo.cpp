#include "../include/NodoArchivo.h"

NodoArchivo::NodoArchivo(int id, vector<int> *padres, int size, int type) : NodoGrafo(id, padres){
    this -> size = size;
    this -> type = type;
}

int NodoArchivo::get_size(){ return this -> size; }
int NodoArchivo::get_type(){ return this -> type; }
void NodoArchivo::set_size(int size){ this -> size = size; }
void NodoArchivo::set_type(int type){ this -> type = type; }

