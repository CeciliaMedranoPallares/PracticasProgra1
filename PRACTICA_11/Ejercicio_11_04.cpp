// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 25/11/2024

// Número de ejercicio: 4

// Problema planteado: Almacenamiento de registros de estudiantes
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string nombreArchivo = "datos.txt"; // Nombre del archivo
    ifstream archivo(nombreArchivo);  // Abrir el archivo para leer
    string palabraBuscar;
    string linea;
    int contador = 0;

    // Verificar si se pudo abrir el archivo
    if (!archivo) {
        cout << "No se pudo abrir el archivo " << nombreArchivo << endl;
        return 1; // Terminar si no se puede abrir el archivo
    }

    // Pedir al usuario la palabra a buscar
    cout << "Ingrese la palabra que desea buscar: ";
    cin >> palabraBuscar;

    // Leer el archivo línea por línea
    while (getline(archivo, linea)) {
        stringstream ss(linea);  // Usar stringstream para separar la línea en palabras
        string palabra;
        
        // Leer palabra por palabra en la línea
        while (ss >> palabra) {
            if (palabra == palabraBuscar) {
                contador++;  // Aumentar el contador si la palabra coincide
            }
        }
    }

    archivo.close(); // Cerrar el archivo

    // Mostrar cuántas veces se encontró la palabra
    cout << "La palabra '" << palabraBuscar << "' aparece " << contador << " veces en el archivo." << endl;

    return 0;
}

