// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 8
// Problema planteado: Alternar entre mayúsculas y minúsculas en una cadena.

#include <iostream>
#include <string>
using namespace std;

// Función que alterna entre mayúsculas y minúsculas en una cadena
void Desplegar(const string &hola);

int main() {
    system("cls");  // Limpiar la pantalla en Windows
    string hola;  // Variable para almacenar la cadena ingresada
    cout << "Ingresa una cadena: ";
    getline(cin, hola);  // Pedir la cadena al usuario
    Desplegar(hola);  // Llamar a la función para alternar mayúsculas y minúsculas
    return 0;
}

// Función para alternar mayúsculas y minúsculas
void Desplegar(const string &hola) {
    string resultado;  // Variable para almacenar el resultado final
    int n = hola.size();  // Obtener el tamaño de la cadena

    // Recorrer cada carácter de la cadena
    for (int i = 0; i < n; i++) {
        char m;  // Variable para el carácter modificado
        if (i % 2 == 0) {  // Si la posición es par
            m = toupper(hola[i]);  // Convertir a mayúscula
        } else {  // Si la posición es impar
            m = tolower(hola[i]);  // Convertir a minúscula
        }
        resultado += m;  // Agregar el carácter modificado al resultado
    }

    // Mostrar el resultado final
    cout << "Cadena alternada: " << resultado << endl;
}

