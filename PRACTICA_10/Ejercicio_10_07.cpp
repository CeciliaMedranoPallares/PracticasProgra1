// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 18/11/2024

// Número de ejercicio: 7

// Problema planteado:Define una estructura llamada Producto
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definimos la estructura Producto con los campos solicitados
struct Producto {
    string nombre;                  // Nombre del producto
    string codigo;                  // Código del producto
    double precio;                  // Precio del producto
    int cantidad_en_inventario;     // Cantidad en inventario
    string observaciones;           // Observaciones
};

// Función para registrar productos y añadir advertencias si la cantidad es baja
void registrarProductos(vector<Producto>& inventario, int n) {
    for (int i = 0; i < n; i++) {
        Producto producto;
        cout << "\nProducto #" << i + 1 << ":\n";
        
        cout << "Nombre: ";
        cin.ignore();
        getline(cin, producto.nombre);

        cout << "Código: ";
        getline(cin, producto.codigo);

        cout << "Precio: ";
        cin >> producto.precio;

        cout << "Cantidad en inventario: ";
        cin >> producto.cantidad_en_inventario;

        // Si la cantidad en inventario es menor a 5, añadimos la advertencia
        if (producto.cantidad_en_inventario < 5) {
            producto.observaciones = "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO";
        } else {
            producto.observaciones = "Inventario suficiente";
        }

        inventario.push_back(producto);
    }
}

// Función para encontrar el producto más caro
Producto encontrarProductoMasCaro(const vector<Producto>& inventario) {
    Producto productoMasCaro = inventario[0];
    for (const auto& producto : inventario) {
        if (producto.precio > productoMasCaro.precio) {
            productoMasCaro = producto;
        }
    }
    return productoMasCaro;
}

// Función para calcular la cantidad total de productos en inventario
int calcularCantidadTotal(const vector<Producto>& inventario) {
    int total = 0;
    for (const auto& producto : inventario) {
        total += producto.cantidad_en_inventario;
    }
    return total;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de productos a registrar: ";
    cin >> n;

    vector<Producto> inventario;

    // Registro de productos
    registrarProductos(inventario, n);

    // Mostrar el producto más caro
    Producto productoMasCaro = encontrarProductoMasCaro(inventario);
    cout << "\nProducto más caro:\n";
    cout << "Nombre: " << productoMasCaro.nombre << ", Código: " << productoMasCaro.codigo
         << ", Precio: " << productoMasCaro.precio << ", Cantidad en inventario: " 
         << productoMasCaro.cantidad_en_inventario << ", Observaciones: " << productoMasCaro.observaciones << endl;

    // Mostrar la cantidad total de productos en inventario
    int cantidadTotal = calcularCantidadTotal(inventario);
    cout << "\nCantidad total de productos en inventario: " << cantidadTotal << endl;

    // Mostrar los productos con advertencia de baja cantidad en inventario
    cout << "\nProductos con baja cantidad en inventario:\n";
    for (const auto& producto : inventario) {
        if (producto.cantidad_en_inventario < 5) {
            cout << "Nombre: " << producto.nombre << ", Código: " << producto.codigo 
                 << ", Cantidad en inventario: " << producto.cantidad_en_inventario 
                 << ", Observaciones: " << producto.observaciones << endl;
        }
    }

    return 0;
}

