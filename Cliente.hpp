#ifndef CLIENTE_HPP
#define CLIENTE_HPP

class Cliente {
private:
    int id;
    char* nombre;
    char* direccion;
    char* telefono;

public:
    Cliente(int id, char* nombre, char* direccion, char* telefono);
    ~Cliente();

    int getId();
    char* getNombre();
    char* getDireccion();
    char* getTelefono();

    void setDireccion(char* direccion);
    void setTelefono(char* telefono);
};

#endif // CLIENTE_HPP