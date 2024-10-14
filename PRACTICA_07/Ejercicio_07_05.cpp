// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 5
// Problema planteado: Escribe un programa que cuente cuántas palabras hay en una oración.
#include <iostream>
#include <string>
using namespace std;

// Esta función cuenta cuántas palabras hay en una cadena
void ContarPalabras(string &hola);

int main() {
    system("cls");  // Limpiar la pantalla en Windows (esto es opcional)
    string hola;
    
    // Pedimos al usuario que ingrese una oración
    cout << "Ingresa una cadena: ";
    getline(cin, hola);  // Obtenemos la oración completa

    // Llamamos a la función que se encargará de contar las palabras
    ContarPalabras(hola);
    
    return 0;
}

void ContarPalabras(string &hola) {
    int n = hola.size();  // Obtenemos el tamaño de la cadena ingresada
    int suma = 0;  // Inicializamos un contador de palabras

    // Vamos a recorrer cada carácter de la cadena
    for (int i = 0; i < n; i++) {
        char p = hola[i];  // Tomamos el carácter actual
        
        // Comprobamos si el carácter es un espacio
        if (p == ' ') {
            suma += 1;  // Si encontramos un espacio, aumentamos el contador de palabras
        }
    }

    // Añadimos uno al contador para contar la última palabra, ya que no hay espacio al final
    suma += 1; 

    // Mostramos el número total de palabras encontradas
    cout << endl << "Número de palabras: " << suma << endl;
}

