// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 14
// Problema planteado:Realizar una función para generar los cuadrados perfectos en el rango 1 a n.
#include <iostream>
#include <cmath> // Para usar la función sqrt()

using namespace std;

// Función para mostrar los cuadrados perfectos entre 1 y n
void mostrarCuadradosPerfectos(int n) {
    cout << "Cuadrados perfectos entre 1 y " << n << ":" << endl;

    // Empezamos desde 1 y vamos hasta el valor máximo cuyo cuadrado sea menor o igual a n
    for (int i = 1; i * i <= n; ++i) {
        int cuadrado = i * i;
        cout << cuadrado << " "; // Mostrar el cuadrado perfecto
    }
}

int main() {
    system("cls");
    int n;

    // Pedir al usuario el límite superior
    cout << "Introduce el número máximo (n): ";
    cin >> n;

    // Verificar que el número sea positivo
    if (n > 0) {
        mostrarCuadradosPerfectos(n);
    } else {
        cout << "El número debe ser positivo." << endl;
    }

    return 0;
}
