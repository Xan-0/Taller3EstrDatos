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
    vector<int> visitados(0,false);
    
    NodoGrafo *cursor = raiz;
    int cursor_id = raiz -> get_id();
    
    s.push(cursor_id);
    
    while(cursor -> es_directorio()){
        cursor_id = s.pop();
        
        
        cursor = cursor -> lista_hijos();
    }
    
    
    return total;

}
