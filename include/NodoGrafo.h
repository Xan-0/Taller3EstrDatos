#pragma once
#include <vector>
using namespace std;

class NodoGrafo {
private:
    int id;
    vector<int> *padres;
public:
    NodoGrafo(int id, vector<int> *padres);
    bool es_directorio();
    
    int* lista_padres();
    void set_padres(vector<int> *padres);
    int getId();
    void setId(int id);
};
