#include "HashTable.h"
#include <iostream>

// Constructor: Inicializa la tabla hash con punteros nulos
HashTable::HashTable() : table(TABLE_SIZE, nullptr) {}

// Destructor: Libera la memoria de todos los nodos en la tabla hash
HashTable::~HashTable() {
    for (Nodo* head : table) {
        while (head) {
            Nodo* temp = head;
            head = head->getNext();
            delete temp;
        }
    }
}

// Función hash: Implementa un algoritmo simple de hashing
int HashTable::hash(const std::string& key) const {
    int hash = 0;
    for (char c : key) {
        hash = (hash * 31 + c) % TABLE_SIZE;
    }
    return hash;
}

// Inserta un nuevo elemento en la tabla hash
void HashTable::insert(const Data& data) {
    int index = hash(data.getNombre());
    Nodo* newNodo = new Nodo(data);
    
    if (!table[index]) {
        table[index] = newNodo;
    } else {
        newNodo->setNext(table[index]);
        table[index] = newNodo;
    }
}

// Busca un elemento por nombre y devuelve sus datos
bool HashTable::get(const std::string& nombre, Data& data) const {
    int index = hash(nombre);
    Nodo* current = table[index];
    
    while (current) {
        if (current->getData().getNombre() == nombre) {
            data = current->getData();
            return true;
        }
        current = current->getNext();
    }
    return false;
}

// Elimina un elemento de la tabla hash por nombre
bool HashTable::remove(const std::string& nombre) {
    int index = hash(nombre);
    Nodo* current = table[index];
    Nodo* prev = nullptr;
    
    while (current) {
        if (current->getData().getNombre() == nombre) {
            if (prev) {
                prev->setNext(current->getNext());
            } else {
                table[index] = current->getNext();
            }
            delete current;
            return true;
        }
        prev = current;
        current = current->getNext();
    }
    return false;
}


// Imprime todos los elementos de la tabla hash
void HashTable::printAll() const {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        Nodo* current = table[i];
        //if (current) {
            std::cout << "Bucket " << i << ":" << std::endl;
            while (current) {
                std::cout << "  └─" << current->getData() << std::endl;
                current = current->getNext();
            }
        //}
    }
}