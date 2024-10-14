// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 4
// Problema planteado: Comparar dos cadenas
#include <iostream>
#include <string>
using namespace std;

// Esta función se encarga de comparar dos cadenas
void Comparar(string &hola, string &hola2);

int main() {
    system("cls");  // Limpiar la pantalla en Windows (esto es opcional)
    string hola, hola2;
    
    // Pedimos al usuario que ingrese dos cadenas de texto
    cout << "Ingresa una cadena: ";
    getline(cin, hola);  // Obtenemos la primera cadena

    cout << "Ingresa otra cadena: ";
    getline(cin, hola2);  // Obtenemos la segunda cadena

    // Llamamos a la función que se encargará de comparar ambas cadenas
    Comparar(hola, hola2);
    
    return 0;
}

void Comparar(string &hola, string &hola2) {
    int n = hola.size();  // Tamaño de la primera cadena
    int m = hola2.size();  // Tamaño de la segunda cadena

    // Primero verificamos si las cadenas tienen el mismo tamaño
    if (n != m) {
        cout << endl << "Las cadenas no son iguales." << endl;
        return;  // Salimos de la función si los tamaños son diferentes
    }

    // Vamos a recorrer ambas cadenas y convertirlas a minúsculas para compararlas
    for (int i = 0; i < n; i++) {
        char p = tolower(hola[i]);  // Convertimos el carácter actual de la primera cadena a minúscula
        char q = tolower(hola2[i]);  // Convertimos el carácter actual de la segunda cadena a minúscula
        
        // Comparamos los caracteres de ambas cadenas
        if (p != q) {  // Si encontramos una diferencia, las cadenas no son iguales
            cout << endl << "Las cadenas no son iguales." << endl;
            return;  // Terminamos la comparación
        }
    }

    // Si llegamos hasta aquí, significa que las cadenas son iguales
    cout << endl << "Las cadenas son iguales." << endl;
}

