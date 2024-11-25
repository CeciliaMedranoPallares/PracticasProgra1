// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 25/11/2024

// Número de ejercicio: 9

// Problema planteado:Cifrado de un archivo de texto (Cifrado César)
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para cifrar el texto utilizando el cifrado César
char cifradoCesar(char caracter, int desplazamiento) {
    // Si el carácter es una letra mayúscula
    if (caracter >= 'A' && caracter <= 'Z') {
        return (caracter - 'A' + desplazamiento) % 26 + 'A';
    }
    // Si el carácter es una letra minúscula
    else if (caracter >= 'a' && caracter <= 'z') {
        return (caracter - 'a' + desplazamiento) % 26 + 'a';
    }
    // Si el carácter no es una letra, devolverlo sin cambios
    else {
        return caracter;
    }
}

int main() {
    string nombreArchivoEntrada = "mensaje.txt";  // Nombre del archivo de entrada
    string nombreArchivoSalida = "mensaje_cifrado.txt"; // Nombre del archivo de salida
    ifstream archivoEntrada(nombreArchivoEntrada);  // Abrir el archivo de entrada
    ofstream archivoSalida(nombreArchivoSalida);    // Abrir el archivo de salida para escribir

    // Verificar si se pudo abrir el archivo de entrada
    if (!archivoEntrada) {
        cout << "No se pudo abrir el archivo " << nombreArchivoEntrada << endl;
        return 1;
    }

    // Verificar si se pudo abrir el archivo de salida
    if (!archivoSalida) {
        cout << "No se pudo abrir el archivo " << nombreArchivoSalida << endl;
        return 1;
    }

    string linea;
    int desplazamiento = 3;  // Desplazamiento de 3 para el cifrado César

    // Leer el archivo línea por línea
    while (getline(archivoEntrada, linea)) {
        // Procesar cada carácter de la línea y cifrarlo
        for (char &caracter : linea) {
            caracter = cifradoCesar(caracter, desplazamiento);  // Cifrar cada carácter
        }

        // Escribir la línea cifrada en el archivo de salida
        archivoSalida << linea << endl;
    }

    archivoEntrada.close();  // Cerrar el archivo de entrada
    archivoSalida.close();   // Cerrar el archivo de salida

    cout << "El archivo " << nombreArchivoSalida << " ha sido generado con el mensaje cifrado." << endl;

    return 0;
}
