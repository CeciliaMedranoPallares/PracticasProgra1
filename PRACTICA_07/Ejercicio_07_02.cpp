// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 2
// Problema planteado:Escribe un programa que cuente el número de vocales (a, e, i, o, u) en una cadena dada
#include <iostream>
#include <string>
using namespace std;

void Desplegar(string hola);

int main() {
    system("cls");  // Limpiar pantalla en Windows
    string hola;
    cout << "Ingresa una cadena: ";
    getline(cin, hola);  // Pedir la cadena
    Desplegar(hola);
    return 0;
}

void Desplegar(string hola) {
    int suma = 0;
    int n = hola.size();  // Obtener el tamaño de la cadena
    for (int i = 0; i < n; i++) {  // Recorrer la cadena
        char m = tolower(hola[i]);  // Convertir a minúscula 
        if (m == 'a' || m == 'e' || m == 'i' || m == 'o' || m == 'u') {
            suma += 1;  // Contar vocales
        }
    }
    cout << "Numero de vocales: " << suma << endl;
}
