// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 9/11/2024

// Número de ejercicio: 13

// Problema planteado:Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de la lectura de dos números enteros, a partir de la relación
#include <iostream>
using namespace std;

// Función recursiva para calcular el coeficiente binomial C(n, m)
int coefBinomial(int n, int m) {
    // Caso base: C(n, 0) = 1 o C(n, n) = 1
    if (m == 0 || m == n)
        return 1;
    // Llamada recursiva: C(n, m) = C(n-1, m-1) + C(n-1, m)
    return coefBinomial(n - 1, m - 1) + coefBinomial(n - 1, m);
}

int main() {
    int n, m;
    cout << "Ingresa el valor de n: ";
    cin >> n;
    cout << "Ingresa el valor de m: ";
    cin >> m;

    if (m > n) {
        cout << "El valor de m no puede ser mayor que n." << endl;
    } else {
        cout << "El coeficiente binomial C(" << n << ", " << m << ") es: " << coefBinomial(n, m) << endl;
    }

    return 0;
}
