// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 1
// Problema planteado: Hola Mundo al revés
#include <iostream>
#include <string>
using namespace std;

void Desplegar(string &hola);  // Pasar la cadena por referencia

int main() {
    system("cls");  // Limpiar pantalla en Windows
    string hola;
    Desplegar(hola);  // Llamar a la función para invertir la cadena
    return 0;
}

void Desplegar(string &hola) {  // Pasar la cadena por referencia
    cout << "Ingresa una cadena: ";
    getline(cin, hola);  // Pedir la cadena
    int n = hola.size();  // Obtener el tamaño de la cadena
    cout << endl << "Cadena invertida: ";
    for (int i = n - 1; i >= 0; i--) {  // Recorrer desde el final hasta el principio
        cout << hola[i];  // Mostrar los caracteres en orden inverso
    }
    cout << endl;
}


