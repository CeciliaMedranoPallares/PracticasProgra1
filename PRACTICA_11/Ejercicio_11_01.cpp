// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 25/11/2024

// Número de ejercicio: Escritura y lectura básica de archivos

// Problema planteado:Escribe un programa que pida al usuario ingresar una lista de nombres y guarde cada nombre en un archivo de texto llamado
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Prototipos de las funciones
void escribirNombres(const string& nombreArchivo);
void leerNombres(const string& nombreArchivo);

int main() {
    const string nombreArchivo = "nombres.txt";

    escribirNombres(nombreArchivo);
    leerNombres(nombreArchivo);

    return 0;
}

// Función para escribir nombres en un archivo
void escribirNombres(const string& nombreArchivo) {
    ofstream archivo(nombreArchivo);  // Abrir el archivo en modo escritura
    if (!archivo) {
        cerr << "No se pudo abrir el archivo para escribir.\n";
        return;
    }

    cout << "Ingresa nombres uno por uno. Escribe 'fin' para terminar:\n";
    string nombre;
    while (true) {
        cout << "Nombre: ";
        getline(cin, nombre);
        if (nombre == "fin") {  // Verificar si el usuario terminó
            break;
        }
        archivo << nombre << endl;  // Escribir el nombre en el archivo
    }
    archivo.close();  // Cerrar el archivo
}

// Función para leer y mostrar los nombres en la consola
void leerNombres(const string& nombreArchivo) {
    ifstream archivoLectura(nombreArchivo);  // Abrir el archivo en modo lectura
    if (!archivoLectura) {
        cerr << "No se pudo abrir el archivo para leer.\n";
        return;
    }

    cout << "\nLos nombres en el archivo son:\n";
    string nombre;
    while (getline(archivoLectura, nombre)) {  // Leer línea por línea
        cout << nombre << endl;  // Mostrar el nombre en la consola
    }
    archivoLectura.close();  // Cerrar el archivo
}
