// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 07/10/2024
// Número de ejercicio: 6
// Problema planteado: Matriz transpuesta.
#include <iostream>
using namespace std;

// Prototipos de las funciones
void Matriz(int matriz[][100], int n,int N);
void MostrarMatriz(int matriz[][100], int n,int N);
void MostrarMatriz2(int matriz[][100], int n,int N);

int main() {
    int N=0;
    int n = 0;
    cout << "Introduzca el numero de filas: ";
    cin >> N;
    cout << "Introduzca el numero de columnas: ";
    cin >> n;


    // Declarar la matriz con un tamaño máximo de 100x100
    int matriz[100][100];
    system("cls");

    // Llamadas a las funciones
    Matriz(matriz, n,N);
    MostrarMatriz(matriz, n,N);
    MostrarMatriz2(matriz, n,N);

    return 0;
}

// Función para ingresar valores en la matriz
void Matriz(int matriz[][100], int n,int N) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Introduzca el valor para la posición [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Función para mostrar la matriz original
void MostrarMatriz(int matriz[][100], int n,int N) {
    cout << "Matriz original:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
// Función para mostrar la matriz transpuesta
void MostrarMatriz2(int matriz[][100], int n,int N) {
    cout << "Matriz transpuesta:\n";
    for (int i = 0;i<N;i++) {
        for (int j = 0; j < n; j++) {

            cout << matriz[j][i] << "\t";
        }
        cout << endl;
    }
}

