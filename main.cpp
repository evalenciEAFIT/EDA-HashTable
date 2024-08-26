#include <iostream>
#include "HashTable.h"

int main() {
    // Crear una instancia de la tabla hash
    HashTable agenda;

    // Insertar algunos elementos en la tabla hash
    agenda.insert(Data("Juan", "123-456-7890"));
    agenda.insert(Data("Maria", "098-765-4321"));
    agenda.insert(Data("Pedro", "111-222-3333"));
    agenda.insert(Data("Ana", "444-555-6666"));
    agenda.insert(Data("Luis", "777-888-9999"));

    // Mostrar todos los elementos de la tabla hash
    std::cout << "Contenido de la agenda:" << std::endl;
    agenda.printAll();

    // Buscar y mostrar un elemento
    Data resultado;
    if (agenda.get("Maria", resultado)) {
        std::cout << "\nBúsqueda exitosa: " << resultado << std::endl;
    }

    // Eliminar un elemento
    if (agenda.remove("Juan")) {
        std::cout << "\nSe eliminó a Juan de la agenda" << std::endl;
    }

    // Mostrar la agenda actualizada
    std::cout << "\nContenido actualizado de la agenda:" << std::endl;
    agenda.printAll();

    return 0;
}