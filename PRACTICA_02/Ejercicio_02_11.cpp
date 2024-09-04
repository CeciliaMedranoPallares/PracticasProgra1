// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 11
// Problema planteado:Realizar una función para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49... para n términos.
#include <iostream>
using namespace std;

// Función para imprimir los primeros dos términos
void imprimirPrimerosTerminos() {
    cout << "1 1 ";
}

// Función para calcular y mostrar los términos restantes de la sucesión
void generarTerminosRestantes(int n) {
    int termino1 = 1;
    int termino2 = 1;

    for (int i = 3; i <= n; ++i) {
        int suma = termino1 + termino2; // Sumar los dos términos anteriores
        cout << suma << " ";

        // Actualizar los términos
        termino1 = termino2;
        termino2 = suma;
    }
}

int main() {
    system("cls");
    int n;

    // Preguntar cuántos términos quiere el usuario
    cout << "Introduce el numero de terminos para la sucesion: ";
    cin >> n;

    // Validar que el número de términos sea positivo
    if (n <= 0) {
        cout << "El numero de terminos debe ser positivo." << endl;
        return 1; // Salir del programa con un código de error
    }

    // Imprimir los primeros dos términos
    imprimirPrimerosTerminos();

    // Generar y mostrar los siguientes términos
    if (n > 2) {
        generarTerminosRestantes(n);
    }

    cout << endl;
    return 0;
}
