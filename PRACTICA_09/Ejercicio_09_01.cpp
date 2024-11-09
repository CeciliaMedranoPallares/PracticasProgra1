// Materia: Programación I, Paralelo 1

// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 9/11/2024

// Número de ejercicio: 1

// Problema planteado:reciba un número entero positivo y devuelva la suma de sus dígitos
#include <iostream>
using namespace std;

/**
 * Función recursiva que calcula la suma de los dígitos de un número
 * @param n Número entero positivo
 * @return Suma de los dígitos del número
 * 
 * Ejemplo: 
 * n = 123
 * Primera llamada: 3 + sumaDigitos(12)
 * Segunda llamada: 3 + 2 + sumaDigitos(1)
 * Tercera llamada: 3 + 2 + 1 + sumaDigitos(0)
 * Resultado: 3 + 2 + 1 + 0 = 6
 */
#include <iostream>
using namespace std;

/**
 * Función recursiva que calcula la suma de los dígitos de un número
 * 
 * Ejemplo: 
 * n = 123
 * Primera llamada: 3 + sumaDigitos(12)
 * Segunda llamada: 3 + 2 + sumaDigitos(1)
 * Tercera llamada: 3 + 2 + 1 + sumaDigitos(0)
 * Resultado: 3 + 2 + 1 + 0 = 6
 */

int sumaDigitos(int n) {
    // Caso base: cuando el número es 0
    if (n == 0) {
        return 0;
    }
    
    // Paso recursivo:
    // Suma el último dígito (n % 10) con la suma de los dígitos restantes
    return (n % 10) + sumaDigitos(n / 10);
}

int main() {
    int numero;
    
    // Solicitar entrada al usuario
    cout << "Ingresa un número entero positivo: ";
    cin >> numero;
    
    // Mostrar resultado
    cout << "La suma de los dígitos es: " << sumaDigitos(numero) << endl;
    
    return 0;
}
