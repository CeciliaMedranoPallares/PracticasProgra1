// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 9
// Problema planteado: Comprimir una cadena de caracteres agrupando caracteres consecutivos y contando su frecuencia.

#include <iostream>
#include <string>
using namespace std;

void Comprimir(string entrada);  // Prototipo de la función para comprimir la cadena

int main() {
    system("cls");  // Limpiar la pantalla en Windows
    string entrada;  // Cadena ingresada por el usuario
    cout << "Ingresa una cadena: ";
    getline(cin, entrada);  // Obtener la cadena
    Comprimir(entrada);  // Llamar a la función para comprimir
    return 0;
}

// Función para comprimir la cadena
void Comprimir(string entrada) {
    string resultado = "";  // Variable para almacenar el resultado
    int n = entrada.size();  // Tamaño de la cadena

    if (n == 0) {  // Si la cadena está vacía
        cout << "Cadena vacía." << endl;
        return;
    }

    char caracter_actual = entrada[0];  // Primer carácter
    int contador = 1;  // Contador de caracteres

    for (int i = 1; i < n; i++) {  // Recorrer la cadena
        if (entrada[i] == caracter_actual) {  // Si el mismo carácter se repite
            contador++;  // Aumentar el contador
        } else {  // Si encontramos un carácter diferente
            resultado += caracter_actual;  // Añadir el carácter al resultado
            resultado += to_string(contador);  // Añadir el contador al resultado
            caracter_actual = entrada[i];  // Actualizar el carácter actual
            contador = 1;  // Reiniciar el contador
        }
    }

    resultado += caracter_actual;  // Añadir el último carácter
    resultado += to_string(contador);  // Añadir su contador

    cout << "Cadena comprimida: " << resultado << endl;  // Mostrar el resultado
}

