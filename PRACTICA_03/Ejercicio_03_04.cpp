// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 4
// Problema planteado:Suma de la serie 1 - 4 + 9 - 16 + 25 - 36 +…………………. Para n términos
#include <iostream>
#include <cmath> // Incluir cmath para usar pow()
using namespace std;

// Función para calcular la suma de los cuadrados alternando signos
int Suma(int n) {
    int digito = 0;  // Variable para almacenar el valor del cuadrado con el signo correspondiente
    int suma = 0;    // Variable para acumular la suma total

    // Bucle para iterar desde 1 hasta n
    for (int i = 1; i <= n; i++) {
        // Alternar el signo del cuadrado dependiendo de si el índice es par o impar
        if (i % 2 == 0) {
            // Si el índice es par, el valor es negativo
            digito = -pow(i, 2);
        } else {
            // Si el índice es impar, el valor es positivo
            digito = pow(i, 2);
        }
        // Sumar el valor calculado al total
        suma += digito;
    }

    return suma; // Retornar el resultado de la suma
}

int main() {
    system("cls"); // Limpiar la pantalla (específico para sistemas Windows)

    int n = 0; // Variable para almacenar la cantidad de términos

    // Solicitar al usuario que ingrese la cantidad de términos
    cout << "Ingrese los términos que desea: ";
    cin >> n;

    // Calcular y mostrar el resultado de la suma
    cout << "La suma es: " << Suma(n) << endl;

    return 0; // Fin del programa
}

