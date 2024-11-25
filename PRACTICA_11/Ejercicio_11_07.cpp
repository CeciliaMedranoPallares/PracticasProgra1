// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 25/11/2024

// Número de ejercicio: 7

// Problema planteado: Promedio de estudiantes
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string nombreArchivoEntrada = "calificaciones.txt"; // Nombre del archivo de entrada
    string nombreArchivoSalida = "promedios.txt";      // Nombre del archivo de salida

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
    
    // Leer el archivo línea por línea
    while (getline(archivoEntrada, linea)) {
        stringstream ss(linea);
        string nombreEstudiante;
        double calificacion;
        double suma = 0;
        int contador = 0;

        ss >> nombreEstudiante;  // Leer el nombre del estudiante
        
        // Leer las calificaciones y sumarlas
        while (ss >> calificacion) {
            suma += calificacion;
            contador++;
        }

        if (contador > 0) {
            double promedio = suma / contador;  // Calcular el promedio
            archivoSalida << nombreEstudiante << " " << promedio << endl;  // Escribir el resultado
        }
    }

    archivoEntrada.close();  // Cerrar el archivo de entrada
    archivoSalida.close();   // Cerrar el archivo de salida

    cout << "El archivo " << nombreArchivoSalida << " ha sido generado con los promedios." << endl;

    return 0;
}

