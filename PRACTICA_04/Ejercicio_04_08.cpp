// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 17/09/2024
// Número de ejercicio: 8.
// Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Estructura para almacenar el nombre y la producción de un mineral
struct Mineral {
    string nombre;
    double produccion;
};

// Función para buscar producción por nombre de mineral
void buscarProduccion(const vector<Mineral>& minerales, const string& nombre) {
    for (const auto& mineral : minerales) {
        if (mineral.nombre == nombre) {
            cout << "Producción de " << nombre << ": " << mineral.produccion << " toneladas métricas." << endl;
            return;
        }
    }
    cout << "Mineral no encontrado." << endl;
}

// Función para ordenar minerales usando el método de burbuja sin swap
void ordenarMinerales(vector<Mineral>& minerales) {
    for (size_t i = 0; i < minerales.size(); ++i) {
        for (size_t j = 0; j < minerales.size() - 1 - i; ++j) {
            if (minerales[j].produccion < minerales[j + 1].produccion) {
                // Crear una copia del mineral
                Mineral temp = minerales[j];
                minerales[j] = minerales[j + 1]; // Intercambiar
                minerales[j + 1] = temp; // Colocar la copia en su lugar
            }
        }
    }
}

// Función para mostrar minerales
void mostrarMinerales(const vector<Mineral>& minerales) {
    cout << "Mineral  Producción (TM)" << endl;
    for (const auto& mineral : minerales) {
        cout << mineral.nombre << " " << mineral.produccion << endl;
    }
}

int main() {
    // Arreglos constantes
    const string nombres[] = {"SN", "SB", "AU", "PT", "AG", "CU"};
    const double produccion[] = {998000, 876500, 786670, 636143, 135567, 109412};

    // Crear un vector de minerales
    vector<Mineral> minerales(6);
    for (int i = 0; i < 6; i++) {
        minerales[i].nombre = nombres[i];
        minerales[i].produccion = produccion[i];
    }

    // Buscar producción de un mineral
    string nombreBuscar;
    cout << "Ingrese el nombre del mineral a buscar: ";
    cin >> nombreBuscar;
    buscarProduccion(minerales, nombreBuscar);

    // Ordenar y mostrar minerales
    cout << endl << "Ordenando minerales por producción..." << endl;
    ordenarMinerales(minerales);
    mostrarMinerales(minerales);

    return 0;
}
