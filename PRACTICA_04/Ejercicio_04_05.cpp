// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 17/09/2024
// Número de ejercicio: 5.
// Problema planteado:Leer 2 vectores de dimensión N y combine ambos en otro vector.
#include <iostream>
#include <vector>

using namespace std;

// Función para obtener la dimensión de los vectores
int obtenerDimension() {
    int N;
    cout << "Introduzca la dimensión de los vectores: ";
    cin >> N;
    return N;
}

// Función para leer un vector
vector<int> leerVector(int N, int numeroVector) {
    vector<int> vec(N);
    cout << "Ingrese los " << N << " elementos del vector " << numeroVector << ":\n";
    for (int i = 0; i < N; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vec[i];
    }
    return vec;
}

// Función para combinar dos vectores
vector<int> combinarVectores(const vector<int>& vec1, const vector<int>& vec2) {
    int N = vec1.size();
    vector<int> combinado(N * 2);  // El vector combinado tendrá el doble de elementos
    
    for (int i = 0; i < N; i++) {
        combinado[i * 2] = vec1[i];      // Elementos del primer vector en posiciones pares
        combinado[i * 2 + 1] = vec2[i];  // Elementos del segundo vector en posiciones impares
    }
    
    return combinado;
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
    // Obtener la dimensión de los vectores
    int N = obtenerDimension();
    
    // Leer los dos vectores
    vector<int> vector1 = leerVector(N, 1);
    vector<int> vector2 = leerVector(N, 2);
    
    // Combinar los vectores
    vector<int> vectorCombinado = combinarVectores(vector1, vector2);
    
    // Mostrar los resultados
    mostrarVector(vector1, "Vector 1");
    mostrarVector(vector2, "Vector 2");
    mostrarVector(vectorCombinado, "Vector Combinado");
    
    return 0;
}
