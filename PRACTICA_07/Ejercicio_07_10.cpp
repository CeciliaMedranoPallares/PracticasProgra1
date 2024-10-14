// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 10
// Problema planteado: Expandir una cadena comprimida a su formato original.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string entrada;  // Cadena comprimida ingresada por el usuario
    cout << "Ingresa la cadena comprimida: ";
    getline(cin, entrada);  // Obtener la cadena

    string resultado = "";  // Variable para almacenar la cadena expandida
    int n = entrada.size();  // Tamaño de la cadena comprimida

    for (int i = 0; i < n; i++) {  // Recorrer la cadena
        char caracter_actual = entrada[i];  // Obtener el carácter
        i++;  // Pasar al siguiente carácter
        int contador = 0;  // Inicializar contador

        // Leer el número que indica cuántas veces se repite el carácter
        while (i < n && entrada[i] >= '0' && entrada[i] <= '9') {
            contador = contador * 10 + (entrada[i] - '0');  // Construir el número
            i++;  // Pasar al siguiente carácter
        }

        // Añadir el carácter al resultado, 'contador' veces
        for (int j = 0; j < contador; j++) {
            resultado += caracter_actual;  // Añadir el carácter
        }

        i--;  // Ajustar el índice porque el bucle principal incrementa 'i'
    }

    cout << "Cadena expandida: " << resultado << endl;  // Mostrar el resultado
    return 0;
}
