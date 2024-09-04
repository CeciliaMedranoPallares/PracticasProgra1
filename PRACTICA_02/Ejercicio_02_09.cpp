// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 9
// Problema planteado: Leer un número entero y realizar una función para determinar si el número ingresado pertenece a la secuencia de Fibonacci.
#include <iostream>
#include <cmath>
using namespace std;

// Función para verificar si un número es un cuadrado perfecto
bool esCuadradoPerfecto(int x) {
    int raiz = (int)sqrt(x);  
    return raiz * raiz == x;
}

// Función para verificar si un número pertenece a la secuencia de Fibonacci
bool perteneceAFibonacci(int numero) {
    if (numero < 0) return false;

    // Verificar si (5*n^2 + 4) o (5*n^2 - 4) son cuadrados perfectos
    int num1 = 5 * numero * numero + 4;
    int num2 = 5 * numero * numero - 4;

    return esCuadradoPerfecto(num1) || esCuadradoPerfecto(num2);
}

int main() {
    system("cls");
    int numero;

    // Pedir el número al usuario
    cout << "Introduce un número entero: ";
    cin >> numero;

    // Verificar si el número pertenece a la secuencia de Fibonacci
    if (perteneceAFibonacci(numero)) {
        cout << numero << " pertenece a la secuencia de Fibonacci." << endl;
    } else {
        cout << numero << " no pertenece a la secuencia de Fibonacci." << endl;
    }

    return 0;
}

