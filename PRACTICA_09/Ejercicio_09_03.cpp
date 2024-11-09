// Materia: Programación I, Paralelo 1

// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 9/11/2024

// Número de ejercicio: 3

// Problema planteado: función recursiva que reciba una cadena y devuelva la misma cadena invertida
#include <iostream>
#include <string>
using namespace std;

/**
 * Función recursiva que invierte una cadena de texto
 * @param cadena Cadena a invertir
 * @return Cadena invertida
 * 
 * Ejemplo: invertirCadena("hola")
 * Primera llamada: 'a' + invertirCadena("hol")
 * Segunda llamada: 'a' + 'l' + invertirCadena("ho")
 * Tercera llamada: 'a' + 'l' + 'o' + invertirCadena("h")
 * Cuarta llamada: 'a' + 'l' + 'o' + 'h' = "aloh"
 */
string invertirCadena(const string& cadena) {
    // Caso base: si la cadena está vacía o tiene un solo carácter
    if (cadena.length() <= 1) {
        return cadena;
    }
    
    // Paso recursivo:
    // 1. Toma el último carácter
    // 2. Concatena con la inversión del resto de la cadena
    return cadena[cadena.length() - 1] + 
           invertirCadena(cadena.substr(0, cadena.length() - 1));
}

int main() {
    string texto;
    
    // Solicitar entrada al usuario
    cout << "Ingresa una cadena de texto: ";
    getline(cin, texto);
    
    // Mostrar la cadena original y su inversión
    cout << "Cadena original: " << texto << endl;
    cout << "Cadena invertida: " << invertirCadena(texto) << endl;
    
    return 0;
}
