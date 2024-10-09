// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 07/10/2024
// Número de ejercicio: 1
// Problema planteado: Elabore un programa que lea una matriz de orden n x n y la cambie la fila 1 por la fila n.
#include <iostream>
using namespace std;

// Prototipos de las funciones
void Matriz(int matriz[][100], int n);
void MostrarMatriz(int matriz[][100], int n);
void MostrarMatriz2(int matriz[][100], int n);

int main() {
    int n = 0;
    cout << "Introduzca el tamaño de la matriz cuadrada: ";
    cin >> n;

    // Declarar la matriz con un tamaño máximo de 100x100
    int matriz[100][100];
    system("cls");

    // Llamadas a las funciones
    Matriz(matriz, n);
    MostrarMatriz(matriz, n);
    MostrarMatriz2(matriz, n);

    return 0;
}

// Función para ingresar valores en la matriz
void Matriz(int matriz[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Introduzca el valor para la posición [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Función para mostrar la matriz original
void MostrarMatriz(int matriz[][100], int n) {
    cout << "Matriz original:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
// Función para mostrar la matriz invertida por filas 
void MostrarMatriz2(int matriz[][100], int n) {
    cout << "Matriz invertida por filas:\n";
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

