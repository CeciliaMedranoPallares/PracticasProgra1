// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 25/11/2024

// Número de ejercicio: 8

// Problema planteado: Contador de líneas, palabras y caracteres
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string nombreArchivo = "documento.txt";  // Nombre del archivo de entrada
    ifstream archivo(nombreArchivo);         // Abrir el archivo para lectura

    // Verificar si se pudo abrir el archivo
    if (!archivo) {
        cout << "No se pudo abrir el archivo " << nombreArchivo << endl;
        return 1;
    }

    string linea;
    int contadorLineas = 0;
    int contadorPalabras = 0;
    int contadorCaracteres = 0;

    // Leer el archivo línea por línea
    while (getline(archivo, linea)) {
        contadorLineas++;  // Contar las líneas

        // Contar las palabras y los caracteres en cada línea
        stringstream ss(linea);
        string palabra;
        while (ss >> palabra) {
            contadorPalabras++;  // Contar las palabras
        }

        contadorCaracteres += linea.length();  // Contar los caracteres (incluyendo espacios)
    }

    archivo.close();  // Cerrar el archivo

    // Mostrar los totales en la consola
    cout << "Total de líneas: " << contadorLineas << endl;
    cout << "Total de palabras: " << contadorPalabras << endl;
    cout << "Total de caracteres: " << contadorCaracteres << endl;

    return 0;
}

