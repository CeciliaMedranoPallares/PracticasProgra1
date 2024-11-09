// Materia: Programación I, Paralelo 1

// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 9/11/2024

// Número de ejercicio: 2

// Problema planteado:Implementa una función recursiva para calcular la potencia de un número. 
#include <iostream>
using namespace std;

/**
 * Función recursiva que calcula la potencia de un número
 * Casos especiales:
 * - Si exponente es 0, retorna 1
 * - Si exponente es negativo, retorna 1/potencia(base, -exponente)
 * 
 * Ejemplo: potencia(2, 3)
 * Primera llamada: 2 * potencia(2, 2)
 * Segunda llamada: 2 * 2 * potencia(2, 1)
 * Tercera llamada: 2 * 2 * 2 * potencia(2, 0)
 * Resultado: 2 * 2 * 2 * 1 = 8
 */
double potencia(double base, int exponente) {
    // Caso base 1: si el exponente es 0, el resultado es 1
    if (exponente == 0) {
        return 1;
    }
    
    // Caso base 2: si el exponente es negativo
    if (exponente < 0) {
        return 1.0 / potencia(base, -exponente);
    }
    
    // Paso recursivo: multiplicamos la base por la potencia con exponente - 1
    return base * potencia(base, exponente - 1);
}

int main() {
    double base;
    int exponente;
    
    // Solicitar entrada al usuario
    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa el exponente: ";
    cin >> exponente;
    
    // Calcular y mostrar el resultado
    double resultado = potencia(base, exponente);
    cout << base << " elevado a la " << exponente << " es: " << resultado << endl;
    
    return 0;
}
