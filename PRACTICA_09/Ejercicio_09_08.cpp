// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 9/11/2024

// Número de ejercicio: 8

// Problema planteado:Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la suma de sus elementos
#include <iostream>
#include <vector>
using namespace std;

/**
 * Función recursiva que suma los elementos de un vector
 * @param vec Vector de números enteros
 * @param indice Índice actual en la recursión
 * @return Suma de los elementos desde el índice hasta el final
 * 
 * Ejemplo: sumaVector({1,2,3,4}, 0)
 * Primera llamada: 1 + sumaVector({1,2,3,4}, 1)
 * Segunda llamada: 1 + 2 + sumaVector({1,2,3,4}, 2)
 * Tercera llamada: 1 + 2 + 3 + sumaVector({1,2,3,4}, 3)
 * Cuarta llamada: 1 + 2 + 3 + 4 + sumaVector({1,2,3,4}, 4)
 * Resultado final: 1 + 2 + 3 + 4 + 0 = 10
 */
int sumaVector(const vector<int>& vec, int indice) {
    // Caso base: si llegamos al final del vector
    if (indice >= vec.size()) {
        return 0;
    }
    
    // Paso recursivo: sumamos el elemento actual con la suma del resto
    return vec[indice] + sumaVector(vec, indice + 1);
}

// Función wrapper para facilitar el uso
int sumaVector(const vector<int>& vec) {
    return sumaVector(vec, 0);
}

int main() {
    int n;
    vector<int> numeros;
    
    // Solicitar tamaño del vector
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    
    // Validar entrada
    if (n <= 0) {
        cout << "Error: El tamaño debe ser positivo." << endl;
        return 1;
    }
    
    // Llenar el vector
    cout << "Ingrese los " << n << " números:" << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cout << "Número " << i + 1 << ": ";
        cin >> num;
        numeros.push_back(num);
    }
    
    // Mostrar el vector
    cout << "\nVector ingresado: [";
    for (int i = 0; i < n; i++) {
        cout << numeros[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "]" << endl;
    
    // Calcular y mostrar la suma
    int suma = sumaVector(numeros);
    
    // Mostrar el proceso de suma
    cout << "\nProceso de suma:" << endl;
    int sumaAcumulada = 0;
    for (int i = 0; i < n; i++) {
        sumaAcumulada += numeros[i];
        cout << (i == 0 ? "" : " + ") << numeros[i];
        cout << " = " << sumaAcumulada << endl;
    }
    
    cout << "\nLa suma total de los elementos es: " << suma << endl;
    
    return 0;
}
