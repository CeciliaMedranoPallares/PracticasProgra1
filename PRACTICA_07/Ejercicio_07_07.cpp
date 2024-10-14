// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 7
// Problema planteado: Contar la frecuencia de cada carácter en una cadena

#include <iostream>
#include <string>
using namespace std;

void ObtenerCadena(string &cadena);          
void ContarFrecuencia(const string &cadena);  

int main() {
    system("cls");  
    string cadena;  
    // Obtener la cadena del usuario
    ObtenerCadena(cadena);
    
    // Contar y mostrar la frecuencia de caracteres
    ContarFrecuencia(cadena);
    
    return 0;
}

// Función para obtener la cadena del usuario
void ObtenerCadena(string &cadena) {
    cout << "Ingresa una cadena: ";
    getline(cin, cadena);  // Leer la cadena completa
}

// Función para contar la frecuencia de caracteres
void ContarFrecuencia(const string &cadena) {
    int frecuencia[256] = {0};  // Arreglo para almacenar la frecuencia de cada carácter

    // Contamos la frecuencia de cada carácter en la cadena
    for (int i = 0; i < cadena.size(); i++) {  // Bucle tradicional
        char c = tolower(cadena[i]);  // Convertimos a minúscula
        frecuencia[c]++;  // Aumentamos el contador para este carácter
    }

    // Mostramos el resultado
    cout << endl << "Frecuencia de caracteres:" << endl;
    for (int i = 0; i < 256; i++) {  // Recorremos el arreglo de frecuencias
        if (frecuencia[i] > 0) {  // Si la frecuencia es mayor que cero, mostramos el carácter
            cout << char(i) << ": " << frecuencia[i] << endl;  // Imprimimos el carácter y su frecuencia
        }
    }
}
