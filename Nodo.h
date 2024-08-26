#ifndef NODO_H
#define NODO_H

#include "Data.h"

// Clase Nodo: Representa un nodo en la lista enlazada de la tabla hash
class Nodo {
private:
    Data data;  // Datos almacenados en el nodo
    Nodo* next; // Puntero al siguiente nodo en la lista

public:
    // Constructor: Inicializa un nodo con datos
    Nodo(const Data& d);

    // Getter para obtener los datos del nodo
    Data getData() const;

    // Setter para actualizar los datos del nodo
    void setData(const Data& d);

    // Getter para obtener el puntero al siguiente nodo
    Nodo* getNext() const;

    // Setter para establecer el puntero al siguiente nodo
    void setNext(Nodo* n);
};

#endif