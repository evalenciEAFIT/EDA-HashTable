#include "Data.h"

// Constructor: Inicializa un objeto Data con nombre y teléfono
Data::Data(const std::string& n, const std::string& t) : nombre(n), telefono(t) {}

// Implementación de los getters y setters
std::string Data::getNombre() const { return nombre; }
std::string Data::getTelefono() const { return telefono; }
void Data::setTelefono(const std::string& t) { telefono = t; }

// Implementación de la sobrecarga del operador <<
std::ostream& operator<<(std::ostream& os, const Data& data) {
    os << "Nombre: " << data.nombre << ", Teléfono: " << data.telefono;
    return os;
}