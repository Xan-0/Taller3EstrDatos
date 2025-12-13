#include "../include/Grafo.h"
#include <stack>

Grafo::Grafo(NodoGrafo *raiz, ArbolBPlus *arbol){ this -> raiz = raiz; this -> arbol = arbol; }
NodoGrafo *Grafo::get_raiz(){ return raiz; }
ArbolBPlus *Grafo::get_arbolB() { return arbol; }
void Grafo::set_raiz(NodoGrafo *raiz){ this -> raiz = raiz; }
void Grafo::set_arbolB(ArbolBPlus *arbol) { this -> arbol = arbol; }

int calcular_espacio_ocupado(int id_directorio){
    int total;
    stack<int> s;
    
    NodoGrafo *cursor;
    int cursor_id;
    s.push(id_directorio);
    
    while(!s.Empty()){
        cursor_id = s.top(); s.pop();
        cursor = arbol -> buscar_nodo_grafo(cursor_id);
        
        if(!cursor -> es_directorio()) { total = total + cursor -> get_size(); continue; }
        if(!cursor -> lista_hijos()) continue;
        
        int *cursor_hijos = cursor->lista_hijos();
        
        for(int i=0; i<sizeof(cursor_hijos);i++){
            s.push(cursor_hijos[i]);
        }
    }
    
    return total;
}

