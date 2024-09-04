// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 13
// Problema planteado:Realizar una función para generar una secuencia de números aleatorios entre 1 y 100, si el número es divisible entre 5, al lado del número debe imprimir un asterisco (*).
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
#include <iostream>

using namespace std;

// Función para generar y mostrar números aleatorios
void generarNumerosAleatorios(int cantidad) {
    int inicio = 1;
    int fin = 100;
    srand(time(NULL)); // Inicializar la semilla para la generación aleatoria

    for (int c = 1; c <= cantidad; c++) {
        int num = inicio + rand() % ((fin + 1) - inicio); // Generar número aleatorio entre 1 y 100
        cout << num;

        // Imprimir un asterisco si el número es divisible entre 5
        if (num % 5 == 0) {
            cout << "*";
        }

        cout << " "; // Espacio entre números
    }
}

int main() {
    system("cls");
    int cantidad;

    // Pedir al usuario la cantidad de números aleatorios
    cout << "Introduce la cantidad de numeros aleatorios a generar: ";
    cin >> cantidad;

    // Verificar que la cantidad sea positiva
    if (cantidad > 0) {
        generarNumerosAleatorios(cantidad);
    } else {
        cout << "La cantidad debe ser positiva." << endl;
    }

    return 0;
}
