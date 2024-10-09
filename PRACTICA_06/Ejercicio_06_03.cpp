// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 07/10/2024
// Número de ejercicio: 2
// Problema planteado: The Walking Dead.
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector> // Para usar los vectores
using namespace std;

// Prototipos de las funciones
void Matriz(int matriz[][100]);
void MostrarMatriz(int matriz[][100]);
void FilasColumnasLibres(int matriz[][100]);
void CoordenadasMuertosVivientes(int matriz[][100], vector<int>& filas, vector<int>& columnas);
int ContarMuertosVivientes(int matriz[][100]); // Nueva función para contar los muertos vivientes
bool VerificarPrimeraColumna(int matriz[][100]); // Nueva función para verificar la primera columna

int main() {
    // Declarar la matriz con un tamaño máximo de 100x100
    int matriz[100][100];
    vector<int> filas;     // Vector para almacenar las filas de los muertos vivientes (números impares)
    vector<int> columnas;  // Vector para almacenar las columnas de los muertos vivientes (números impares)
    
    system("cls"); // Limpiar la pantalla
    srand(time(NULL)); // Inicializar la semilla para la generación de números aleatorios

    // Llamadas a las funciones
    Matriz(matriz); // Generar la matriz con números aleatorios
    MostrarMatriz(matriz);
    FilasColumnasLibres(matriz);
    CoordenadasMuertosVivientes(matriz, filas, columnas);

    // d) Contar la cantidad de muertos vivientes
    int cantidadMuertosVivientes = ContarMuertosVivientes(matriz);
    cout << "d) La cantidad de muertos vivientes en toda la matriz es: " << cantidadMuertosVivientes << endl;

    // e) Verificar si dos o más muertos vivientes están en la primera columna
    if (VerificarPrimeraColumna(matriz)) {
        cout << "e) No es posible entrar al complejo." << endl;
    } else {
        cout << "e) Es posible entrar al complejo." << endl;
    }

    return 0; // Finalizar el programa
}

// Función para asignar valores en la matriz
void Matriz(int matriz[][100]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = 1 + rand() % 1000; // Valores aleatorios entre 1 y 1000
        }
    }
}

// Función para mostrar la matriz generada
void MostrarMatriz(int matriz[][100]) {
    cout << "a) Mostrar Matriz:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 != 0) {
                cout << "x" << "\t"; // Impar = muerto viviente
            } else {
                cout << "o" << "\t"; // Par = otro elemento
            }
        }
        cout << endl; // Nueva línea al final de cada fila
    }
}

void FilasColumnasLibres(int matriz[][100]) {
    int sumatotal = 0; // Contador de filas libres
    int sumatotal2 = 0; // Contador de columnas libres

    // Verificar filas libres
    for (int i = 0; i < 4; i++) {
        int libre = 0; // Contador de impares en la fila
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 != 0) {
                libre++; // Aumentar el contador de impares
            }
        }
        if (libre >= 3) { // Al menos 3 impares
            sumatotal++;
        }
    }

    // Verificar columnas libres
    for (int j = 0; j < 3; j++) {
        int libre2 = 0; // Contador de impares en la columna
        for (int i = 0; i < 4; i++) {
            if (matriz[i][j] % 2 != 0) {
                libre2++; // Aumentar el contador de impares
            }
        }
        if (libre2 >= 4) { // Al menos 4 impares
            sumatotal2++;
        }
    }

    cout << "b) Filas libres: " << sumatotal << endl;
    cout << "Columnas libres: " << sumatotal2 << endl;
}

// Función para determinar las coordenadas de los muertos vivientes (números impares)
void CoordenadasMuertosVivientes(int matriz[][100], vector<int>& filas, vector<int>& columnas) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 != 0) {
                filas.push_back(i);     // Almacenar el índice de la fila
                columnas.push_back(j);  // Almacenar el índice de la columna
            }
        }
    }

    // Mostrar las coordenadas de los muertos vivientes
    cout << "c) Coordenadas de los muertos vivientes (números impares):\n";
    for (size_t i = 0; i < filas.size(); i++) {
        cout << "Muerto viviente en fila " << filas[i] << ", columna " << columnas[i] << endl;
    }
}

// d) Función para contar la cantidad de muertos vivientes (números impares) en la matriz
int ContarMuertosVivientes(int matriz[][100]) {
    int contador = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 != 0) {
                contador++; // Contar los números impares
            }
        }
    }
    return contador; // Retornar la cantidad total
}

// e) Función para verificar si hay dos o más muertos vivientes en la primera columna
bool VerificarPrimeraColumna(int matriz[][100]) {
    int contador = 0;
    for (int i = 0; i < 4; i++) {
        if (matriz[i][0] % 2 != 0) { // Si el número en la primera columna es impar
            contador++;
        }
    }
    return contador >= 2; // Retorna verdadero si hay 2 o más muertos vivientes en la primera columna
}
