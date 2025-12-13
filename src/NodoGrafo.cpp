#include "NodoGrafo.h"

NodoGrafo::NodoGrafo(int id, vector<int> *padres){
    this -> id = id;
    this -> padres = padres;
}

bool NodoGrafo::es_directorio(){ return false; }

int *NodoGrafo::lista_padres(){
    int n = padres -> size();
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        arr[i] = (*padres)[i];
    }
    return arr;
}

void NodoGrafo::set_padres(vector<int> *padres){ this -> padres = padres; }
int NodoGrafo::getId(){ return id; }
void NodoGrafo::setId(int id){ this -> id = id; }
