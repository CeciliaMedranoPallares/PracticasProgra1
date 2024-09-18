// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 17/09/2024
// Número de ejercicio: 11.
// Problema planteado:se almacenan las ventas mensuales de una empresa y un arreglo constante que contiene los nombres de los meses
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const int TOTAL_MESES = 12; // Número total de meses
    vector<double> ventasMensuales(TOTAL_MESES);
    string nombresMeses[TOTAL_MESES] = {"Ene", "Feb", "Mar", "Abr", "May", "Jun", 
                                          "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"};

    // Solicitar las ventas de cada mes
    cout << "Por favor, ingrese las ventas para cada uno de los 12 meses:" << endl;
    for (int i = 0; i < TOTAL_MESES; i++) {
        cout << nombresMeses[i] << ": ";
        cin >> ventasMensuales[i];
    }

    // Calcular el total de ventas y determinar la venta más alta
    double sumaTotal = 0;
    double ventaMaxima = ventasMensuales[0];
    vector<string> mesesConMaximo;

    for (int i = 0; i < TOTAL_MESES; i++) {
        sumaTotal += ventasMensuales[i]; // Acumular las ventas
        if (ventasMensuales[i] > ventaMaxima) {
            ventaMaxima = ventasMensuales[i]; // Actualizar la venta máxima
        }
    }

    // Identificar los meses en los que se registraron las ventas máximas
    for (int i = 0; i < TOTAL_MESES; i++) {
        if (ventasMensuales[i] == ventaMaxima) {
            mesesConMaximo.push_back(nombresMeses[i]); // Agregar el mes
        }
    }

    // Mostrar la información recopilada
    cout << "La venta más alta fue de: " << ventaMaxima << endl;
    cout << "Mes(es) con ventas máximas: ";
    for (const string& mes : mesesConMaximo) {
        cout << mes << " ";
    }
    cout << endl;
    cout << "El total de ventas es: " << sumaTotal << endl;

    return 0;
}
