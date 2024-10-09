#include <iostream>
using namespace std;

// Función para llenar la matriz en forma de espiral (caracol)
void LlenarMatrizCaracol(int n, int matriz[][100]) {
    int valor = 1; // El valor inicial que colocaremos en la matriz
    int inicioFila = 0, finFila = n - 1; // Límites para las filas
    int inicioColumna = 0, finColumna = n - 1; // Límites para las columnas

    // Llenamos la matriz hasta que hayamos recorrido todas las filas y columnas
    while (inicioFila <= finFila && inicioColumna <= finColumna) {
        // Rellenamos la parte superior de izquierda a derecha
        for (int i = inicioColumna; i <= finColumna; i++) {
            matriz[inicioFila][i] = valor++;
        }
        inicioFila++; // Ahora pasamos a la siguiente fila

        // Rellenamos la parte derecha de arriba hacia abajo
        for (int i = inicioFila; i <= finFila; i++) {
            matriz[i][finColumna] = valor++;
        }
        finColumna--; // Reducimos el límite de la columna derecha

        // Si todavía quedan filas por recorrer, llenamos la parte inferior de derecha a izquierda
        if (inicioFila <= finFila) {
            for (int i = finColumna; i >= inicioColumna; i--) {
                matriz[finFila][i] = valor++;
            }
            finFila--; // Reducimos el límite de la fila inferior
        }

        // Si todavía quedan columnas por recorrer, llenamos la parte izquierda de abajo hacia arriba
        if (inicioColumna <= finColumna) {
            for (int i = finFila; i >= inicioFila; i--) {
                matriz[i][inicioColumna] = valor++;
            }
            inicioColumna++; // Ahora avanzamos la columna izquierda hacia la derecha
        }
    }
}

// Función para mostrar la matriz en pantalla
void MostrarMatriz(int n, int matriz[][100]) {
    cout << "Matriz generada en forma de caracol:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t"; 
        }
        cout << endl; 
    }
}

int main() {
    int n;
    cout << "Introduce el tamaño de la matriz (n x n): "; 
    cin >> n;

    int matriz[100][100]; 
    LlenarMatrizCaracol(n, matriz); 
    MostrarMatriz(n, matriz); 

    return 0; 
}
