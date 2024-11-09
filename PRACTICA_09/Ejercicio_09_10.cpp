// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 9/11/2024

// Número de ejercicio: 10

// Problema planteado:Suma de cuadrados de numeros consecutivos
#include <iostream>
using namespace std;

// Función recursiva que calcula la suma de los cuadrados desde 1 hasta n
// Por ejemplo, si n=3, calcula: 1² + 2² + 3² = 1 + 4 + 9 = 14
int sumaCuadrados(int n) {
    // Caso base: si n es 0, retornamos 0
    if (n == 0) {
        return 0;
    }
    // Caso base: si n es 1, retornamos 1
    if (n == 1) {
        return 1;
    }
    
    // Caso recursivo: sumamos n al cuadrado más la suma de los cuadrados anteriores
    // Formula: n² + sumaCuadrados(n-1)
    return (n * n) + sumaCuadrados(n - 1);
}

int main() {
    int n;
    
    // Solicitamos el número al usuario
    cout << "Ingrese un número positivo: ";
    cin >> n;
    
    // Verificamos que el número sea positivo
    if (n < 0) {
        cout << "Por favor, ingrese un número positivo" << endl;
        return 1;
    }
    
    // Calculamos y mostramos el resultado
    int resultado = sumaCuadrados(n);
    cout << "La suma de los cuadrados desde 1 hasta " << n << " es: " << resultado << endl;
    
    return 0;
}
