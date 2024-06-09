#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include "Venta.h"
#include "Clientes.h"

using namespace std;

/// DESARROLLO DE LOS METODOS DE LA CLASE 'CLIENTES'
// CONSTRUCTOR POR DEFECTO
Clientes::Clientes() {
    _idCliente = 0;
    strcpy(_nombreCliente, "");
    strcpy(_apellidoCliente, "");
    strcpy(_direccionCliente, "");
    _telefonoCliente = 0;
    _estado = false;
}
// CONSTRUCTOR POR PARAMETROS
Clientes::Clientes(int idCliente, string nombreCliente, string apellidoCliente, string direccionCliente, int telefonoCliente, bool estado) {
    setIdCliente(idCliente);
    setNombreCliente(nombreCliente);
    setApellidoCliente(apellidoCliente);
    setDireccionCliente(direccionCliente);
    setTelefonoCliente(telefonoCliente);
    setEstado(estado);
}
// SET Y GET
void Clientes::setIdCliente(int idCliente) {
    _idCliente = idCliente;
}
int Clientes::getIdCliente() {
    return _idCliente;
}

void Clientes::setNombreCliente(string nombreCliente) {
    if (nombreCliente.size() <= 29) {
        strcpy(_nombreCliente, nombreCliente.c_str());
    } else {
        strcpy(_nombreCliente, "SIN DATOS");
    }
}
string Clientes::getNombreCliente() {
    return _nombreCliente;
}

void Clientes::setApellidoCliente(string apellidoCliente) {
    if (apellidoCliente.size() <= 29) {
        strcpy(_apellidoCliente, apellidoCliente.c_str());
    } else {
        strcpy(_apellidoCliente, "SIN DATOS");
    }
}
string Clientes::getApellidoCliente() {
    return _apellidoCliente;
}

void Clientes::setDireccionCliente(string direccionCliente) {
    if (direccionCliente.size() <= 29) {
        strcpy(_direccionCliente, direccionCliente.c_str());
    } else {
        strcpy(_direccionCliente, "SIN DATOS");
    }
}
string Clientes::getDireccionCliente() {
    return _direccionCliente;
}

void Clientes::setTelefonoCliente(int telefonoCliente) {
    _telefonoCliente = telefonoCliente;
}
int Clientes::getTelefonoCliente() {
    return _telefonoCliente;
}

void Clientes::setEstado(bool estado) {
    _estado = estado;
}
bool Clientes::getEstado() {
    return _estado;
}

// METODOS
//    Clientes crearCliente();
//    void mostrarCliente(Clientes cliente)

