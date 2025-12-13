#include "NodoDirectorio.h"

NodoDirectorio::NodoDirectorio(int id, vector<int> *padres, vector<int> *hijos) : NodoGrafo(id, padres){
    this -> hijos = hijos;
}

int *NodoDirectorio::lista_hijos(){
    int n = hijos -> size();
    if(n==0) { return nullptr; }
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        arr[i] = (*hijos)[i];
    }
    return arr;
}
void NodoDirectorio::set_hijos(vector<int> *hijos){ this -> hijos = hijos; }
