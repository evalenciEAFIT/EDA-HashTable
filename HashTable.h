#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <vector>
#include "Nodo.h"

// Clase HashTable: Implementa una tabla hash para almacenar y recuperar datos
class HashTable {
private:
    static const int TABLE_SIZE = 10; // Tamaño fijo de la tabla hash
    std::vector<Nodo*> table;          // Vector de punteros a nodos

    // Función hash: Convierte una clave (string) en un índice de la tabla
    int hash(const std::string& key) const;

public:
    // Constructor: Inicializa la tabla hash
    HashTable();

    // Destructor: Libera la memoria de todos los nodos
    ~HashTable();

    // Inserta un nuevo elemento en la tabla hash
    void insert(const Data& data);

    // Busca un elemento por nombre y devuelve sus datos
    bool get(const std::string& nombre, Data& data) const;

    // Elimina un elemento de la tabla hash por nombre
    bool remove(const std::string& nombre);

    // Imprime todos los elementos de la tabla hash
    void printAll() const;
};

#endif