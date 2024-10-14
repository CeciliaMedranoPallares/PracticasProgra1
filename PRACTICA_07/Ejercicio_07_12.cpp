// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 12
// Problema planteado: Dividir una cadena en subcadenas usando un delimitador.

#include <iostream>
#include <string>
using namespace std;

// Prototipos de las funciones
void solicitarCadena(string &cadena);
void dividirCadena(const string &cadena, char delimitador);

int main() {
    string entrada;  // Cadena de entrada
    char delimitador;  // Delimitador para dividir la cadena

    solicitarCadena(entrada);  // Solicitar la cadena al usuario
    cout << "Ingresa el delimitador: ";
    cin >> delimitador;  // Obtener el delimitador

    dividirCadena(entrada, delimitador);  // Dividir la cadena en subcadenas

    return 0;
}

// Función para solicitar una cadena al usuario
void solicitarCadena(string &cadena) {
    cout << "Ingresa una cadena: ";
    getline(cin, cadena);  // Obtener la cadena de entrada
}

// Función para dividir la cadena en subcadenas utilizando un delimitador
void dividirCadena(const string &cadena, char delimitador) {
    string subcadena;  // Variable para almacenar la subcadena temporal

    for (int i = 0; i <= cadena.size(); i++) {  // Recorremos toda la cadena
        if (cadena[i] == delimitador || i == cadena.size()) {
            // Si encontramos el delimitador o llegamos al final, imprimimos la subcadena
            cout << subcadena << endl;  
            subcadena.clear();  // Limpiamos la subcadena para el siguiente uso
        } else {
            // Agregamos el carácter actual a la subcadena
            subcadena += cadena[i];
        }
    }
}
