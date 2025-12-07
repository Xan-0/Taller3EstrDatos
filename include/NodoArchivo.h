#pragma once

class NodoArchivo: public NodoGrafo {
private:
    int size;
    int type; // 0: Imagen; 1: Documento; 2: ejecutable; 3: Video; 4: Comprimido
public:
    NodoArchivo(int id, vector<int> *padres, int size, int type);
    bool es_directorio() { return false; }
    
    int get_size();
    int get_type();
    void set_size(int size);
    void set_type(int type);
};