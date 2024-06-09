#include <iostream>
#include <string>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include "InventarioArchivo.h"
#include "Archivo.h"

using namespace std;

/// DESARROLLO DE LOS METODOS DE LA CLASE 'InventarioArchivo'
// CONSTRUCTOR POR DEFECTO
InventarioArchivo::InventarioArchivo(){
    _fileName = "inventario.dat";
}
// CONSTRUCTOR POR PARAMETROS
InventarioArchivo::InventarioArchivo(string fileName){
    _fileName = fileName;
}

// METODOS
//    void guardarProducto();
//    void buscarProdutcto();
//    void listarStock();
//    void listarProductoID();
//    void elimiarProducto();
//    void sumarStock();
//    void restarStock();
//    void modificarPrecioUnitario();
//    void menu();

// METODOS RELACIONADOS A REGISTROS
//    bool guardarRegistro(Producto producto);
//    bool guardarRegistroModificado(int index, Producto producto);
//    Producto leerRegistro(int index);
//    int buscarRegistro(int idProducto);
//    int getCantidadRegistros();
//    bool eliminarRegistro(int idProducto);
//    bool modificarRegistro(int index, Producto producto);
