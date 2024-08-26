#include "Nodo.h"

// Constructor: Inicializa el nodo con datos y establece el siguiente nodo como nullptr
Nodo::Nodo(const Data& d) : data(d), next(nullptr) {}

// Implementación de los getters y setters
Data Nodo::getData() const { return data; }
void Nodo::setData(const Data& d) { data = d; }
Nodo* Nodo::getNext() const { return next; }
void Nodo::setNext(Nodo* n) { next = n; }