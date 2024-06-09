#pragma once
#include <string>
#include "Producto.h"

class InventarioArchivo {
private:
    Producto producto;
public:
    // CONSTRUCTOR POR DEFECTO
    InventarioArchivo();
    // CONSTRUCTO POR PARAMETROS
    InventarioArchivo(std::string fileName);

    // METODOS
    void guardarProducto();
    void buscarProdutcto();
    void listarStock();
    void listarProductoID();
    void elimiarProducto();
    void sumarStock();
    void restarStock();
    void modificarPrecioUnitario();
    void menu();

    // METODOS RELACIONADOS A REGISTROS
    bool guardarRegistro(Producto producto);
    bool guardarRegistroModificado(int index, Producto producto);
    Producto leerRegistro(int index);
    int buscarRegistro(int idProducto);
    int getCantidadRegistros();
    bool eliminarRegistro(int idProducto);
    bool modificarRegistro(int index, Producto producto);

};
