// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 07/10/2024
// Número de ejercicio: 4
// Problema planteado: Matriz nxn consecutiva;

#include <iostream>
using namespace std;

// Prototipos de las funciones
void Matriz(int matriz[][100], int n); // Declaración de la función que llena la matriz
void MostrarMatriz(int matriz[][100], int n); // Declaración de la función que muestra la matriz

int main() {
    int n = 0; // Variable para almacenar el tamaño de la matriz
    cout << "Introduzca el tamaño de la matriz cuadrada: "; // Mensaje para el usuario
    cin >> n; // Leer el tamaño de la matriz desde la entrada estándar

    // Declarar la matriz con un tamaño máximo de 100x100
    int matriz[100][100]; // Se utiliza un arreglo bidimensional para la matriz
    system("cls"); // Limpiar la pantalla (solo funciona en sistemas Windows)

    // Llamadas a las funciones
    Matriz(matriz, n); // Llenar la matriz con valores consecutivos
    MostrarMatriz(matriz, n); // Mostrar la matriz generada

    return 0; // Finalizar el programa
}

// Función para ingresar valores en la matriz
void Matriz(int matriz[][100], int n) {
    int num = 1; // Inicializar el número en 1, que será el primer elemento

    // Llenar la matriz
    for (int i = 0; i < n; i++) { // Iterar sobre cada fila de la matriz
        for (int j = 0; j < n; j++) { // Iterar sobre cada columna de la fila
            matriz[i][j] = num; // Asignar el número actual a la posición de la matriz
            num++; // Incrementar el número para el siguiente elemento
        }
        // Ajustar el valor de num para que la siguiente fila comience 2 unidades más que el primer elemento de la fila anterior
        num = num - 3; // Restar 3 para mantener la lógica de la matriz consecutiva
    }
}

// Función para mostrar la matriz original
void MostrarMatriz(int matriz[][100], int n) {
    cout << "Matriz original:\n"; // Mensaje de encabezado
    for (int i = 0; i < n; i++) { // Iterar sobre cada fila
        for (int j = 0; j < n; j++) { // Iterar sobre cada columna
            cout << matriz[i][j] << "\t"; // Mostrar el elemento actual de la matriz
        }
        cout << endl; // Nueva línea al final de cada fila para una mejor presentación
    }
}

