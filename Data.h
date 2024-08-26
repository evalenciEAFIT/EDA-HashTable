#ifndef DATA_H
#define DATA_H

#include <string>
#include <iostream>

// Clase Data: Encapsula los datos de cada entrada en la tabla hash
class Data {
private:
    std::string nombre;   // Nombre del contacto (clave)
    std::string telefono; // Número de teléfono del contacto (valor)

public:
    // Constructor: Inicializa un objeto Data con nombre y teléfono
    Data(const std::string& n = "", const std::string& t = "");

    // Getter para obtener el nombre
    std::string getNombre() const;

    // Getter para obtener el teléfono
    std::string getTelefono() const;

    // Setter para actualizar el teléfono
    void setTelefono(const std::string& t);

    // Sobrecarga del operador << para imprimir objetos Data
    friend std::ostream& operator<<(std::ostream& os, const Data& data);
};

#endif