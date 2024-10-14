// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 6
// Problema planteado: Determinar si una cadena es un palíndromo
#include <iostream>
#include <string>
using namespace std;

// Función que verifica si una cadena es un palíndromo
void VerificarPalindromo(string &cadena);

int main() {
    system("cls");  // Limpiar la pantalla en Windows (opcional)
    string cadena;  // Variable para almacenar la cadena ingresada
    
    // Pedimos al usuario que ingrese una cadena
    cout << "Ingresa una cadena: ";
    getline(cin, cadena);  // Leer la cadena completa

    // Llamamos a la función para verificar si es un palíndromo
    VerificarPalindromo(cadena);
    
    return 0;
}

void VerificarPalindromo(string &cadena) {
    int n = cadena.size();  // Obtener la longitud de la cadena
    string cadenaInvertida;  // Cadena para almacenar la cadena invertida

    // Convertimos la cadena a minúsculas y la almacenamos en cadenaInvertida
    for (int i = 0; i < n; i++) {
        cadenaInvertida += tolower(cadena[i]);  // Agregamos cada carácter en minúscula
    }

    // Invertimos la cadena
    string palindromo;  // Cadena para almacenar el palíndromo
    for (int i = n - 1; i >= 0; i--) {
        palindromo += cadenaInvertida[i];  // Agregamos los caracteres en orden inverso
    }

    // Comparamos la cadena original (en minúsculas) con la invertida
    if (cadenaInvertida == palindromo) {
        cout << endl << "Es un palíndromo." << endl;  // Mensaje si es palíndromo
    } else {
        cout << endl << "No es un palíndromo." << endl;  // Mensaje si no es palíndromo
    }
}
