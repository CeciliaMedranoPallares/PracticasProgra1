// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 25/11/2024

// Número de ejercicio: 5

// Problema planteado: Actualizar datos de un archivo
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// Estructura para representar un producto
struct Producto {
    string nombre;
    double precio;
};

// Función para actualizar el precio de un producto en el archivo
bool actualizarProducto(const string& nombreProducto, double nuevoPrecio, const string& nombreArchivo) {
    ifstream archivoEntrada(nombreArchivo);  // Abrir el archivo para lectura
    vector<Producto> productos;  // Vector para almacenar los productos del archivo
    string linea;
    bool encontrado = false;

    // Leer todos los productos en el archivo
    while (getline(archivoEntrada, linea)) {
        stringstream ss(linea);
        Producto prod;
        ss >> prod.nombre >> prod.precio;
        
        if (prod.nombre == nombreProducto) {
            // Si el producto coincide, actualizar el precio
            prod.precio = nuevoPrecio;
            encontrado = true;
        }
        
        productos.push_back(prod);
    }

    archivoEntrada.close();  // Cerrar archivo de entrada

    if (!encontrado) {
        return false;  // Si no se encontró el producto
    }

    // Abrir el archivo en modo de escritura para sobrescribirlo con los nuevos datos
    ofstream archivoSalida(nombreArchivo);
    for (const auto& prod : productos) {
        archivoSalida << prod.nombre << " " << prod.precio << endl;  // Escribir los productos actualizados
    }

    archivoSalida.close();  // Cerrar archivo de salida
    return true;
}

int main() {
    string nombreArchivo = "productos.txt";  // Nombre del archivo
    string nombreProducto;
    double nuevoPrecio;

    // Pedir al usuario el nombre del producto y el nuevo precio
    cout << "Ingrese el nombre del producto a actualizar: ";
    cin >> nombreProducto;

    cout << "Ingrese el nuevo precio para " << nombreProducto << ": ";
    cin >> nuevoPrecio;

    // Intentar actualizar el producto en el archivo
    if (actualizarProducto(nombreProducto, nuevoPrecio, nombreArchivo)) {
        cout << "El precio de " << nombreProducto << " se ha actualizado correctamente." << endl;
    } else {
        cout << "El producto " << nombreProducto << " no se encuentra en el archivo." << endl;
    }

    return 0;
}
