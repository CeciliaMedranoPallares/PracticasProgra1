// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 25/11/2024

// Número de ejercicio: 2

// Problema planteado: Contador de palabras en un archivo
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Prototipo de la función
int contarPalabras(const string& nombreArchivo);

int main() {
    const string nombreArchivo = "texto.txt";

    int totalPalabras = contarPalabras(nombreArchivo);

    if (totalPalabras >= 0) {
        cout << "El archivo contiene " << totalPalabras << " palabras.\n";
    } else {
        cout << "No se pudo abrir el archivo.\n";
    }

    return 0;
}

// Función para contar palabras separadas únicamente por espacios
int contarPalabras(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);  // Abrir el archivo en modo lectura
    if (!archivo) {
        cerr << "No se pudo abrir el archivo para leer.\n";
        return -1;  // Retorna un valor negativo si no se puede abrir el archivo
    }

    string linea;
    int contador = 0;

    while (getline(archivo, linea)) {  // Leer línea por línea
        for (size_t i = 0; i < linea.size(); ++i) {
            // Detectar el inicio de una palabra
            if (linea[i] != ' ' && (i == 0 || linea[i - 1] == ' ')) {
                ++contador;
            }
        }
    }

    archivo.close();  // Cerrar el archivo
    return contador;
}

