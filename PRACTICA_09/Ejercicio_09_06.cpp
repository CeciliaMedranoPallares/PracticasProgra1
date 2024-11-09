
// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 9/11/2024

// Número de ejercicio: 6

// Problema planteado:Realizar un algoritmo recursivo para calcular el máximo común divisor de dos números enteros aplicando el algoritmo de Euclides.
#include <iostream>
#include <math.h>
using namespace std;

/**
 * Función recursiva que calcula el Máximo Común Divisor usando el algoritmo de Euclides
 * @param a Primer número entero (se tomará su valor absoluto)
 * @param b Segundo número entero (se tomará su valor absoluto)
 * @return El MCD de los dos números
 * 
 * Algoritmo de Euclides:
 * MCD(a,b) = MCD(b, a mod b)
 * El proceso se repite hasta que el residuo sea 0
 * 
 * Ejemplo: MCD(48,18)
 * Primera llamada: MCD(48,18) -> 48 = 2 * 18 + 12 -> MCD(18,12)
 * Segunda llamada: MCD(18,12) -> 18 = 1 * 12 + 6  -> MCD(12,6)
 * Tercera llamada: MCD(12,6)  -> 12 = 2 * 6 + 0   -> return 6
 */
int mcd(int a, int b) {
    // Convertir a valores absolutos para manejar números negativos
    a = abs(a);
    b = abs(b);
    
    // Caso base 1: si b es 0, el MCD es a
    if (b == 0) {
        return a;
    }
    
    // Caso base 2: si a es 0, el MCD es b
    if (a == 0) {
        return b;
    }
    
    // Paso recursivo: aplicar el algoritmo de Euclides
    return mcd(b, a % b);
}

int main() {
    int num1, num2;
    
    // Solicitar entrada al usuario
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    
    // Validar que no sean ambos cero
    if (num1 == 0 && num2 == 0) {
        cout << "Error: El MCD de 0 y 0 no está definido." << endl;
        return 1;
    }
    
    // Calcular y mostrar el MCD
    int resultado = mcd(num1, num2);
    
    // Mostrar el proceso paso a paso
    cout << "\nProceso del algoritmo de Euclides:" << endl;
    int a = abs(num1);
    int b = abs(num2);
    while (b != 0) {
        cout << a << " = " << (a/b) << " * " << b << " + " << (a%b) << endl;
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    cout << "\nEl Máximo Común Divisor de " << num1 << " y " 
         << num2 << " es: " << resultado << endl;
    
    // Verificar el resultado
    cout << "\nVerificación:" << endl;
    if (resultado != 0) {
        cout << num1 << " = " << (num1/resultado) << " * " << resultado << endl;
        cout << num2 << " = " << (num2/resultado) << " * " << resultado << endl;
    }
    
    return 0;
}
