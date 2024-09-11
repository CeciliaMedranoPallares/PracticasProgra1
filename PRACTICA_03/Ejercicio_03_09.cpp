// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 9
// Problema planteado:GenerarGenerar (para un orden n): Sea n=5:
//1 0 1 0 1
//0 1 0 1 0
//1 0 1 0 1
//0 1 0 1 0
//1 0 1 0 1
#include <iostream>
using namespace std;

// Función para generar y mostrar la matriz de 1s y 0s
void Generar(int n) {
    for (int i = 0; i < n; ++i) {
        // Imprimir cada fila
        for (int j = 0; j < n; ++j) {
            // Imprime 1 si la suma de los índices es par, de lo contrario imprime 0
            if ((i + j) % 2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        // Salto de línea después de cada fila
        cout << endl;
    }
}

int main() {
    system("cls");
    int n;
    cout << "Introduzca el orden de la matriz: ";
    cin >> n;

    // Llamada a la función GenerarMatriz
    Generar(n);

    return 0;
}
