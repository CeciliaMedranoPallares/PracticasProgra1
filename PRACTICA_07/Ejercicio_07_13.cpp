// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 13
// Problema planteado: Invertir el orden de las palabras en una oración.

#include <iostream>
#include <string>
using namespace std;

// Función para invertir el orden de las palabras
void invertirPalabras(string oracion) {
    string palabra;  // Variable para construir cada palabra
    string resultado;  // Cadena para almacenar el resultado final

    // Recorrer cada carácter en la oración
    for (int i = 0; i <= oracion.size(); i++) {
        // Comprobar si encontramos un espacio o el final de la cadena
        if (oracion[i] == ' ' || oracion[i] == '\0') {
            resultado = palabra + " " + resultado;  // Añadir la palabra al inicio del resultado
            palabra.clear();  // Limpiar la palabra temporal
        } else {
            palabra += oracion[i];  // Agregar el carácter actual a la palabra
        }
    }

    // Imprimir el resultado, eliminando el espacio adicional al final
    cout << "Oración invertida: " << resultado << endl;
}

int main() {
    string oracion;  // Cadena para almacenar la oración

    cout << "Ingresa una oración: ";
    getline(cin, oracion);  // Obtener la oración de entrada

    // Llamar a la función para invertir las palabras
    invertirPalabras(oracion);

    return 0;
}
