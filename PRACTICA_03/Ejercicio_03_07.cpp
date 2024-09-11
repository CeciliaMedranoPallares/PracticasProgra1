// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 5
// Problema planteado:Simular el lanzamiento de una moneda n veces y determinar el porcentaje de caras y el porcentaje de sellos.
// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 7
// Problema planteado: Generar 1 2 3 4 …………..n
                            //1 2 3 4……. n-1
                            //1 2 3 …...n-2
                            //……….
                            //1
#include <iostream>
using namespace std;

// Función para generar y mostrar las secuencias
void Secuencia(int n) {
    // Bucle para las filas
    for (int i = 0; i < n; ++i) {
        // Bucle para imprimir los números en cada fila
        for (int j = 1; j <= (n - i); ++j) {
            cout << j << " ";
        }
        cout << endl; // Salto de línea al final de cada fila
    }
}

int main() {
    system("cls");
    int n = 0;
    cout << "Introduzca el número de filas: ";
    cin >> n;

    // Llamada a la función Secuencia
    Secuencia(n);

    return 0;
}
