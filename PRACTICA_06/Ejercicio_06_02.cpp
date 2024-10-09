// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 07/10/2024
// Número de ejercicio: 2
// Problema planteado: Matriz con números randomicos.
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;

// Prototipos de las funciones
void Matriz(int matriz[][100], int n, int A, int B);
void MostrarMatriz(int matriz[][100], int n);
void SumaColumna(int matriz[][100], int n);
void ProductoFila(int matriz[][100], int n);
void MayorValor(int matriz[][100], int n);
void DesviacionEstandar(int matriz[][100], int n);

int main() {
    int n = 0; // Tamaño de la matriz
    int A = 0; // Inicio del rango de números aleatorios
    int B = 0; // Límite del rango de números aleatorios
    cout << "Introduzca el tamaño de la matriz cuadrada: ";
    cin >> n; // Leer el tamaño de la matriz
    cout << "Introduzca el inicio de los numeros generados: ";
    cin >> A; // Leer el valor inicial
    cout << "Introduzca el limite de los numeros: ";
    cin >> B; // Leer el valor límite

    // Declarar la matriz con un tamaño máximo de 100x100
    int matriz[100][100];
    system("cls"); // Limpiar la pantalla
    srand(time(NULL)); // Inicializar la semilla para la generación de números aleatorios

    // Llamadas a las funciones
    Matriz(matriz, n, A, B); // Generar la matriz con números aleatorios
    MostrarMatriz(matriz, n); // Mostrar la matriz generada
    SumaColumna(matriz, n); // Calcular y mostrar la suma de la última columna
    ProductoFila(matriz, n); // Calcular y mostrar el producto de la última fila
    MayorValor(matriz, n); // Encontrar y mostrar el mayor valor y su posición
    DesviacionEstandar(matriz, n); // Calcular y mostrar la desviación estándar

    return 0; // Finalizar el programa
}

// Función para ingresar valores en la matriz
void Matriz(int matriz[][100], int n, int A, int B) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Asignar un valor aleatorio dentro del rango [A, B]
            matriz[i][j] = A + rand() % ((B + 1) - A);
        }
    }
}

// Función para mostrar la matriz generada
void MostrarMatriz(int matriz[][100], int n) {
    cout << "Matriz generada:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t"; // Mostrar cada elemento de la matriz
        }
        cout << endl; // Nueva línea al final de cada fila
    }
}

// Función para calcular la suma de la última columna
void SumaColumna(int matriz[][100], int n) {
    int Suma = 0; // Inicializar la suma
    for (int i = 0; i < n; i++) {
        Suma += matriz[i][n - 1]; // Sumar los elementos de la última columna
    }
    cout << "La suma de la ultima columna es: " << Suma << endl; // Mostrar la suma
}

// Función para calcular el producto de la última fila
void ProductoFila(int matriz[][100], int n) {
    int Producto = 1; // Inicializar el producto
    for (int i = 0; i < n; i++) {
        Producto *= matriz[n - 1][i]; // Multiplicar los elementos de la última fila
    }
    cout << "El producto de la ultima fila es: " << Producto << endl; // Mostrar el producto
}

// Función para encontrar el mayor valor en la matriz y su posición
void MayorValor(int matriz[][100], int n) {
    int maxValor = matriz[0][0]; // Inicializar con el primer elemento
    int fila = 0, columna = 0; // Inicializar la posición del mayor valor

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] > maxValor) { // Comparar cada elemento con el mayor valor actual
                maxValor = matriz[i][j]; // Actualizar el mayor valor
                fila = i; // Guardar la fila del mayor valor
                columna = j; // Guardar la columna del mayor valor
            }
        }
    }
    
    // Mostrar el mayor valor y su posición
    cout << "El mayor valor es: " << maxValor << " en la posicion (" << fila << ", " << columna << ")" << endl;
}

// Función para calcular la desviación estándar de la matriz
void DesviacionEstandar(int matriz[][100], int n) {
    double suma = 0; // Inicializar la suma de elementos
    double media; // Variable para la media
    double sumaDesviacion = 0; // Inicializar la suma de desviaciones
    int totalElementos = n * n; // Total de elementos en la matriz
    
    // Calcular la suma de todos los elementos
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            suma += matriz[i][j]; // Sumar elementos
        }
    }
    
    // Calcular la media
    media = suma / totalElementos;

    // Calcular la suma de las desviaciones al cuadrado
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sumaDesviacion += pow(matriz[i][j] - media, 2); // Desviación al cuadrado
        }
    }
    
    // Calcular la desviación estándar
    double desviacionEstandar = sqrt(sumaDesviacion / totalElementos);
    
    // Mostrar la desviación estándar de cada elemento
    cout << "Desviacion estandar de la matriz: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            double desviacionElemento = matriz[i][j] - media; // Desviación de cada elemento
            cout << "Elemento [" << i << "][" << j << "]: " << desviacionElemento << endl;
        }
    }
    
    cout << "Desviacion estandar total: " << desviacionEstandar << endl; // Mostrar desviación estándar total
}






