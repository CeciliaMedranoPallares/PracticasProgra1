
// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 9/11/2024

// Número de ejercicio: 5

// Problema planteado:función recursiva que devuelva el enésimo número en la secuencia de Fibonacci. 
#include <iostream>
#include <map>
using namespace std;

/**
 * Función recursiva que calcula el n-ésimo número de Fibonacci usando memoización
 * @param n Posición en la secuencia de Fibonacci (comenzando desde 0)
 * @param memo Mapa para almacenar resultados ya calculados
 * @return El número de Fibonacci en la posición n
 * 
 * Ejemplo de la secuencia: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
 * Para n = 5:
 * fib(5) = fib(4) + fib(3)
 * fib(4) = fib(3) + fib(2)
 * fib(3) = fib(2) + fib(1)
 * fib(2) = fib(1) + fib(0)
 */
long long fibonacciMemo(int n, map<int, long long>& memo) {
    // Caso base 1: si n es 0
    if (n == 0) return 0;
    
    // Caso base 2: si n es 1
    if (n == 1) return 1;
    
    // Revisar si ya calculamos este valor
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }
    
    // Calcular y almacenar el resultado
    memo[n] = fibonacciMemo(n - 1, memo) + fibonacciMemo(n - 2, memo);
    return memo[n];
}

// Función wrapper para facilitar el uso
long long fibonacci(int n) {
    if (n < 0) {
        cout << "Error: El número debe ser no negativo" << endl;
        return -1;
    }
    map<int, long long> memo;
    return fibonacciMemo(n, memo);
}

int main() {
    int n;
    
    // Solicitar entrada al usuario
    cout << "Ingrese la posición de Fibonacci que desea calcular (comenzando desde 0): ";
    cin >> n;
    
    // Validar entrada
    if (n < 0) {
        cout << "Error: Por favor ingrese un número no negativo." << endl;
        return 1;
    }
    
    // Calcular y mostrar resultado
    long long resultado = fibonacci(n);
    
    // Mostrar la secuencia hasta el número solicitado
    cout << "\nSecuencia de Fibonacci hasta la posición " << n << ":" << endl;
    for(int i = 0; i <= n; i++) {
        cout << "F(" << i << ") = " << fibonacci(i);
        if (i < n) cout << ", ";
    }
    cout << endl;
    
    cout << "\nEl número de Fibonacci en la posición " << n << " es: " << resultado << endl;
    
    return 0;
}
