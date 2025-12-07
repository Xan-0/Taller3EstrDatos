#pragma once

class NodoBInterno: public NodoBPlusBase {
private:
    NodoBPlusBase** punteros; // Vector del tipo NodoBPlusBase*
public:
    NodoBInterno(int* claves, int orden, bool es_hoja, NodoBPlusBase** punteros);
    // función que dado un id de NodoGrafo indica a cual Nodo del árbol B hay
    // que moverse. Devuelve el índice de vector punteros.
    int buscar_siguiente();
    NodoBPlusBase **get_punteros();
    void set_punteros(NodoBPlusBase** punteros);
};