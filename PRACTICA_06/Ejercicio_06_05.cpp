// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 07/10/2024
// Número de ejercicio: 5
// Problema planteado: Matrices nxm y mxn multiplicacion;
#include <iostream>
using namespace std;

// Prototipos de las funciones
void MatrizA(int matrizA[][100], int n, int m);
void MatrizB(int matrizB[][100], int m,int n);
void MultiplicarMatrices(int matrizA[][100], int matrizB[][100], int matrizResultado[][100], int n, int m);
void MostrarMatriz(int matriz[][100], int filas, int columnas);

int main() {
    int n = 0, m = 0;

    cout << "Introduzca el numero de filas de la matriz A y el numero de columns de B: ";
    cin >> n; // Número de filas de la matriz A
    cout << "Introduzca el numero de columnas de la matriz A y el numero de filas de B: ";
    cin >> m; // Número de columnas de la matriz A, que es igual al número de filas de la matriz B

    // Declarar matrices
    int matrizA[100][100];
    int matrizB[100][100];
    int matrizResultado[100][100];

    system("cls");

    // Llamadas a las funciones
    MatrizA(matrizA, n, m);
    MatrizB(matrizB, m,n); // No se necesita la dimensión de columnas para B
    MultiplicarMatrices(matrizA, matrizB, matrizResultado, n, m);

    cout << "Matriz A:\n";
    MostrarMatriz(matrizA, n, m);
    cout << "Matriz B:\n";
    MostrarMatriz(matrizB, m, n);
    cout << "Resultado de la multiplicacion (A * B):\n";
    MostrarMatriz(matrizResultado, n, n); // La matriz resultado es de orden n x n

    return 0;
}

// Función para ingresar valores en la matriz A
void MatrizA(int matrizA[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Introduzca el valor para la posición A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }
}

// Función para ingresar valores en la matriz B
void MatrizB(int matrizB[][100], int m,int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) { // La matriz B tiene m filas y n columnas
            cout << "Introduzca el valor para la posición B[" << i << "][" << j << "]: ";
            cin >> matrizB[i][j];
        }
    }
}

// Función para multiplicar las matrices
void MultiplicarMatrices(int matrizA[][100], int matrizB[][100], int matrizResultado[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrizResultado[i][j] = 0; // Inicializar el valor en 0
            for (int k = 0; k < m; k++) {
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j]; // Multiplicación y suma
            }
        }
    }
}

// Función para mostrar una matriz
void MostrarMatriz(int matriz[][100], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}


