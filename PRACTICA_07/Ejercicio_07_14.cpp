// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 14
// Problema planteado: Encontrar la palabra más larga en una oración.

#include <iostream>
#include <string>
using namespace std;

// Función para encontrar la palabra más larga
string encontrarPalabraMasLarga(string oracion) {
    string palabra;          // Variable para almacenar la palabra actual
    string palabraMasLarga; // Variable para almacenar la palabra más larga
    int longitudMaxima = 0; // Longitud máxima de la palabra encontrada

    // Recorrer cada carácter en la oración
    for (int i = 0; i <= oracion.size(); i++) {
        // Comprobar si encontramos un espacio o el final de la cadena
        if (oracion[i] == ' ' || oracion[i] == '\0') {
            // Comparar la longitud de la palabra actual con la máxima
            if (palabra.length() > longitudMaxima) {
                longitudMaxima = palabra.length(); // Actualizar longitud máxima
                palabraMasLarga = palabra;         // Actualizar la palabra más larga
            }
            palabra.clear(); // Limpiar la palabra para la siguiente
        } else {
            palabra += oracion[i]; // Agregar el carácter actual a la palabra
        }
    }

    return palabraMasLarga; // Devolver la palabra más larga
}

int main() {
    string oracion; // Cadena para almacenar la oración

    cout << "Ingresa una oración: ";
    getline(cin, oracion); // Obtener la oración de entrada

    // Llamar a la función para encontrar la palabra más larga
    string resultado = encontrarPalabraMasLarga(oracion);

    // Imprimir el resultado
    cout << "La palabra más larga es: " << resultado << endl;

    return 0;
}
