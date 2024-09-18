// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 17/09/2024
// Número de ejercicio: 6.
// Problema planteado:. Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.
#include <iostream>
#include <vector>

using namespace std;



// Función para leer un vector
vector<int> leerVector( int numeroVector) {
    vector<int> vec(5);
    cout << "Ingrese los 5 elementos del vector " << numeroVector << ":\n";
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vec[i];
    }
    return vec;
}

// Función para sumar dos vectores
vector<int> sumaVectores(const vector<int>& vec1, const vector<int>& vec2) {
    vector<int> suma(5);  // El vector combinado tendrá el doble de elementos
    
    for (int i = 0; i < 5; i++) {
        suma[i] = vec1[i]+vec2[i];
    }
    
    return suma;
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
    
    
    // Leer los dos vectores
    vector<int> vector1 = leerVector(1);
    vector<int> vector2 = leerVector(2);
    
    // Combinar los vectores
    vector<int> vectorSuma = sumaVectores(vector1, vector2);
    
    // Mostrar los resultados
    mostrarVector(vector1, "Vector 1");
    mostrarVector(vector2, "Vector 2");
    mostrarVector(vectorSuma, "Vector suma");
    
    return 0;
}
