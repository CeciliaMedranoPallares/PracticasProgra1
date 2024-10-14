// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 11
// Problema planteado: Eliminar todos los dígitos de una cadena.

#include <iostream>
#include <string>
using namespace std;

// Prototipos de las funciones
void solicitarCadena(string &cadena);
string eliminarDigitos(const string &cadena);

int main() {
    string entrada;  // Cadena de entrada que contiene dígitos
    solicitarCadena(entrada);  // Solicitar la cadena al usuario

    string resultado = eliminarDigitos(entrada);  // Eliminar los dígitos
    cout << "Cadena sin dígitos: " << resultado << endl;  // Mostrar el resultado

    return 0;
}

// Función para solicitar una cadena al usuario
void solicitarCadena(string &cadena) {
    cout << "Ingresa una cadena: ";
    getline(cin, cadena);  // Obtener la cadena de entrada
}

// Función para eliminar dígitos de la cadena
string eliminarDigitos(const string &cadena) {
    string resultado = "";  // Cadena para almacenar el resultado sin dígitos

    for (int i = 0; i < cadena.size(); i++) {  // Recorrer cada carácter de la cadena
        char caracter_actual = cadena[i];  // Obtener el carácter actual

        // Verificar si el carácter actual no es un dígito
        if (caracter_actual < '0' || caracter_actual > '9') {
            resultado += caracter_actual;  // Agregar el carácter a la cadena resultado
        }
    }

    return resultado;  
}
