#include "Cliente.hpp"

// Función para calcular la longitud de una cadena
int longitud(const char* cadena) {
    int i = 0;
    while (cadena[i] != '\0') {
        i++;
    }
    return i;
}

// Constructor
Cliente::Cliente(int id, char* nombre, char* direccion, char* telefono) : id(id) {
    int lenNombre = longitud(nombre) + 1;
    this->nombre = new char[lenNombre];
    for (int i = 0; i < lenNombre; i++) {
        this->nombre[i] = nombre[i];
    }

    int lenDireccion = longitud(direccion) + 1;
    this->direccion = new char[lenDireccion];
    for (int i = 0; i < lenDireccion; i++) {
        this->direccion[i] = direccion[i];
    }

    int lenTelefono = longitud(telefono) + 1;
    this->telefono = new char[lenTelefono];
    for (int i = 0; i < lenTelefono; i++) {
        this->telefono[i] = telefono[i];
    }
}

// Destructor
Cliente::~Cliente() {
    delete[] nombre;
    delete[] direccion;
    delete[] telefono;
}

// Métodos get
int Cliente::getId() { return id; }
char* Cliente::getNombre() { return nombre; }
char* Cliente::getDireccion() { return direccion; }
char* Cliente::getTelefono() { return telefono; }

// Métodos set
void Cliente::setDireccion(char* direccion) {
    delete[] this->direccion;
    int lenDireccion = longitud(direccion) + 1;
    this->direccion = new char[lenDireccion];
    for (int i = 0; i < lenDireccion; i++) {
        this->direccion[i] = direccion[i];
    }
}

void Cliente::setTelefono(char* telefono) {
    delete[] this->telefono;
    int lenTelefono = longitud(telefono) + 1;
    this->telefono = new char[lenTelefono];
    for (int i = 0; i < lenTelefono; i++) {
        this->telefono[i] = telefono[i];
    }
}