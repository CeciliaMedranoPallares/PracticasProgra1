// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 9/11/2024

// Número de ejercicio: 12

// Problema planteado:Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es simétrica
#include <iostream>
#include <string>
using namespace std;

// Función recursiva para verificar si una cadena es simétrica
bool esSimetrica(const string &cadena, int inicio, int fin) {
    // Caso base: si los índices se cruzan o son iguales, es simétrica
    if (inicio >= fin)
        return true;
    // Comprobar si los caracteres en los extremos son iguales
    if (cadena[inicio] != cadena[fin])
        return false;
    // Llamada recursiva para los caracteres internos
    return esSimetrica(cadena, inicio + 1, fin - 1);
}

int main() {
    string cadena;
    cout << "Ingresa una cadena: ";
    cin >> cadena;

    // Llamada a la función con índices iniciales
    if (esSimetrica(cadena, 0, cadena.length() - 1))
        cout << "La cadena es simétrica." << endl;
    else
        cout << "La cadena no es simétrica." << endl;

    return 0;
}
