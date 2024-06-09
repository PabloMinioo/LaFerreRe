#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include "Producto.h"

using namespace std;

/// DESARROLLO DE LOS METODOS DE LA CLASE PRODUCTO
// CONSTRUCTOR POR DEFECTO
Producto::Producto(){
    _idProducto = 0;
    strcpy(_nombreProducto, "");
    _tipoProducto = 0;
    _stock = 0;
    _precioUnitario = 0;
    strcpy(_nombreProveedor, "");
    _estado = false;
}
// CONSTRUCTO POR PARAMETROS
Producto::Producto(int idProducto, string nombreProducto, int tipoProdcuto, int stock, float precioUnitario, string nombreProveedor, bool estado){
    setIdProducto(idProducto);
    setNombreProducto(nombreProducto);
    setTipoProducto(tipoProdcuto);
    setStock(stock);
    setPrecioUnitario(precioUnitario);
    setNombreProveedor(nombreProveedor);
    setEstado(estado);
}
// SETTERS Y GETTERS
void Producto::setIdProducto(int idProducto){
    _idProducto = idProducto;
}
int Producto::getIdProducto(){
    return _idProducto;
}
void Producto::setNombreProducto(string nombreProducto){
    if (nombreProducto.size() <= 29){
        strcpy(_nombreProducto, nombreProducto.c_str());
    } else {
        strcpy(_nombreProducto, "SIN DATOS");
    }
}
string Producto::getNombreProduco(){
    return _nombreProducto;
}
void Producto::setTipoProducto(int tipoProducto){
    _tipoProducto = _tipoProducto;
}
int Producto::getTipoProducto(){
    return _tipoProducto;
}
void Producto::setStock(int stock){
    _stock = stock;
}
int Producto::getStock(){
    return _stock;
}
void Producto::setPrecioUnitario(float precioUnitario){
    _precioUnitario = precioUnitario;
}
float Producto::getPrecioUnitario(){
    return _precioUnitario;
}
void Producto::setNombreProveedor(string nombreProveedor){
    if (nombreProveedor.size() <= 29){
        strcpy(_nombreProveedor, nombreProveedor.c_str());
    } else {
        strcpy(_nombreProveedor, "SIN DATOS");
    }
}
string Producto::getNombreProveedor(){
    return _nombreProveedor;
}
void Producto::setEstado(bool estado){
    _estado = estado;
}
bool Producto::getEstado(){
    return _estado;
}
// METODOS
//CrearProducto
//MostrarProducto
