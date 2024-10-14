// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 3
// Problema planteado: Eliminar espacio de una cadena
#include <iostream>
#include <string>
using namespace std;

// Función que eliminará los espacios de la cadena
void Desplegar(string &hola);  // Pasamos la cadena por referencia para modificarla directamente

int main() {
    system("cls");  // Limpiar la pantalla (esto solo funciona en Windows)
    string hola;
    Desplegar(hola);  // Llamamos a la función que se encargará de eliminar los espacios
    return 0;
}

void Desplegar(string &hola) {
    string hola2 = "";  // Esta será nuestra nueva cadena, sin espacios
    cout << "Ingresa una cadena: ";
    getline(cin, hola);  // Pedimos al usuario que ingrese una cadena de texto

    // Vamos a recorrer la cadena original y quitar los espacios
    int n = hola.size();  // Obtenemos el tamaño de la cadena original
    cout << endl << "Cadena sin espacios: ";

    // Recorremos cada carácter de la cadena
    for (int i = 0; i < n; i++) {
        char m = hola[i];  // Tomamos el carácter actual
        if (m != ' ') {  // Si no es un espacio...
            hola2 += m;  // ...lo agregamos a la nueva cadena
        }
    }

    // Al final, mostramos la cadena sin espacios
    cout << hola2 << endl;
}

