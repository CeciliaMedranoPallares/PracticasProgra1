// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 8
// Problema planteado:Generar
//121
//12321
//1234321
//123454321
//12345654321
//1234567654321
//123456787654321
//12345678987654321
#include <iostream>
using namespace std;

// Función para generar y mostrar las secuencias
void GenerarSecuencia(int n) {
    for (int i = 1; i <= n; ++i) {
        // Imprimir la primera mitad de los números (ascendente)
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        // Imprimir la segunda mitad de los números (descendente)
        for (int j = i - 1; j >= 1; --j) {
            cout << j;
        }
        // Salto de línea después de cada fila
        cout << endl;
    }
}

int main() {
    system ("cls");
    int n;
    cout << "Introduzca el número de filas: ";
    cin >> n;

    // Llamada a la función GenerarSecuencia
    GenerarSecuencia(n);

    return 0;
}
