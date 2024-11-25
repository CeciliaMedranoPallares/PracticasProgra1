// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 25/11/2024

// Número de ejercicio: 6

// Problema planteado: Filtrado de registros de temperatura
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string nombreArchivoEntrada = "temperaturas.txt"; // Nombre del archivo de entrada
    string nombreArchivoSalida = "altas_temperaturas.txt"; // Nombre del archivo de salida
    double umbralTemperatura;

    // Pedir al usuario el valor de la temperatura mínima
    cout << "Ingrese la temperatura mínima (en grados Celsius) para filtrar las ciudades: ";
    cin >> umbralTemperatura;

    ifstream archivoEntrada(nombreArchivoEntrada);  // Abrir el archivo de entrada
    if (!archivoEntrada) {  // Verificar si se pudo abrir el archivo de entrada
        cout << "No se pudo abrir el archivo " << nombreArchivoEntrada << endl;
        return 1;
    }

    ofstream archivoSalida(nombreArchivoSalida);    // Abrir el archivo de salida para escribir
    if (!archivoSalida) {  // Verificar si se pudo abrir el archivo de salida
        cout << "No se pudo abrir el archivo " << nombreArchivoSalida << endl;
        return 1;
    }

    string linea;
    string ciudad;
    double temperatura;

    // Leer el archivo línea por línea
    while (getline(archivoEntrada, linea)) {
        stringstream ss(linea);
        ss >> ciudad >> temperatura; // Leer el nombre de la ciudad y la temperatura

        // Verificar si la temperatura es mayor que el umbral
        if (temperatura > umbralTemperatura) {
            // Escribir la ciudad y su temperatura en el archivo de salida
            archivoSalida << ciudad << " " << temperatura << endl;
        }
    }

    archivoEntrada.close();  // Cerrar el archivo de entrada
    archivoSalida.close();   // Cerrar el archivo de salida

    cout << "El archivo " << nombreArchivoSalida << " ha sido generado con las ciudades con altas temperaturas." << endl;

    return 0;
}

