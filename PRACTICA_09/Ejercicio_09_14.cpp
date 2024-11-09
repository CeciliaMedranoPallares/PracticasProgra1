// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 9/11/2024

// Número de ejercicio: 14

// Problema planteado:, calcule e imprima los elementos correspondientes a la conjetura de Ullman
#include <iostream>
using namespace std;

// Función recursiva para calcular y mostrar la secuencia de Ullman
void conjeturaUllman(int n) {
    // Imprime el número actual en la secuencia
    cout << n << " ";
    
    // Caso base: cuando n es 1, termina la recursión
    if (n == 1)
        return;
    
    // Llamada recursiva dependiendo de si n es par o impar
    if (n % 2 == 0)
        conjeturaUllman(n / 2);   // Si es par, se divide entre 2
    else
        conjeturaUllman(3 * n + 1); // Si es impar, se multiplica por 3 y se suma 1
}

int main() {
    int numero;
    cout << "Ingresa un entero positivo mayor a 1: ";
    cin >> numero;

    if (numero > 1) {
        cout << "Secuencia de Ullman para " << numero << ": ";
        conjeturaUllman(numero); // Llamada inicial a la función recursiva
        cout << endl;
    } else {
        cout << "Por favor ingresa un número entero mayor a 1." << endl;
    }

    return 0;
}
