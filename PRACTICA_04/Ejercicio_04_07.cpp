// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 17/09/2024
// Número de ejercicio: 7.
// Problema planteado: Programa que declare un vector de diez elementos enteros y pida números para rellenarlo hasta que se llene el vector o se introduzca un número negativo. Entonces se debe imprimir el vector (sólo los elementos introducidos).
#include <iostream>
#include <vector>

using namespace std;

// Función para leer un vector
vector<int> leerVector() {
    vector<int> vec(10); // Vector con capacidad para 10 elementos
    cout << "Ingrese los elementos del vector (número negativo para terminar):\n";

    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vec[i];

        // Si se introduce un número negativo, se ajusta el índice
        if (vec[i] < 0) {
            vec.resize(i+1); // Ajusta el tamaño del vector a los elementos válidos
            return vec; // Devuelve el vector con los elementos introducidos
        }
    }

    return vec; // Devuelve el vector si se llenó completamente
}

// Función para mostrar un vector
void mostrarVector(const vector<int>& vec, const string& nombre) {
    cout << nombre << ": ";
    for (int elemento : vec) {
        cout << elemento << " ";
    }
    cout << endl;
}

int main() {
    // Leer el vector
    vector<int> vector1 = leerVector();

    // Mostrar los resultados
    mostrarVector(vector1, "Vector 1");

    return 0;
}
