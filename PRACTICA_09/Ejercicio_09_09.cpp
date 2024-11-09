// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 9/11/2024

// Número de ejercicio: 9

// Problema planteado:Realizar un algoritmo recursivo para comparar si dos vectores son iguales.
#include <iostream>
#include <vector>
using namespace std;

/**
 * Función recursiva que compara si dos vectores son iguales
 * @param vec1 Primer vector
 * @param vec2 Segundo vector
 * @param indice Índice actual en la comparación
 * @return true si los vectores son iguales, false en caso contrario
 * 
 * Ejemplo: sonIguales({1,2,3}, {1,2,3}, 0)
 * Primera llamada: 1==1 && sonIguales({1,2,3}, {1,2,3}, 1)
 * Segunda llamada: 2==2 && sonIguales({1,2,3}, {1,2,3}, 2)
 * Tercera llamada: 3==3 && sonIguales({1,2,3}, {1,2,3}, 3)
 * Resultado: true
 */
bool sonIguales(const vector<int>& vec1, const vector<int>& vec2, int indice) {
    // Caso base 1: si llegamos al final de ambos vectores
    if (indice >= vec1.size()) {
        return true;
    }
    
    // Paso recursivo: comparamos el elemento actual y seguimos con el siguiente
    return (vec1[indice] == vec2[indice]) && 
           sonIguales(vec1, vec2, indice + 1);
}

// Función wrapper para facilitar el uso
bool sonIguales(const vector<int>& vec1, const vector<int>& vec2) {
    // Verificar si los tamaños son diferentes
    if (vec1.size() != vec2.size()) {
        return false;
    }
    
    // Si los tamaños son iguales, hacer la comparación recursiva
    return sonIguales(vec1, vec2, 0);
}

void imprimirVector(const vector<int>& vec) {
    cout << "[";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ", ";
    }
    cout << "]";
}

int main() {
    int n1, n2;
    vector<int> vector1, vector2;
    
    // Leer primer vector
    cout << "Ingrese el tamaño del primer vector: ";
    cin >> n1;
    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < n1; i++) {
        int num;
        cout << "Elemento " << i + 1 << ": ";
        cin >> num;
        vector1.push_back(num);
    }
    
    // Leer segundo vector
    cout << "\nIngrese el tamaño del segundo vector: ";
    cin >> n2;
    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < n2; i++) {
        int num;
        cout << "Elemento " << i + 1 << ": ";
        cin >> num;
        vector2.push_back(num);
    }
    
    // Mostrar los vectores
    cout << "\nPrimer vector: ";
    imprimirVector(vector1);
    cout << "\nSegundo vector: ";
    imprimirVector(vector2);
    cout << endl;
    
    // Comparar y mostrar resultados
    bool sonIdenticos = sonIguales(vector1, vector2);
    
    cout << "\nComparación elemento por elemento:" << endl;
    int minSize = min(vector1.size(), vector2.size());
    for (int i = 0; i < minSize; i++) {
        cout << "Posición " << i << ": " << vector1[i] << " vs " << vector2[i];
        if (vector1[i] == vector2[i]) {
            cout << " ✓" << endl;
        } else {
            cout << " ✗" << endl;
        }
    }
    
    if (vector1.size() != vector2.size()) {
        cout << "\nLos vectores tienen tamaños diferentes:" << endl;
        cout << "Vector 1: " << vector1.size() << " elementos" << endl;
        cout << "Vector 2: " << vector2.size() << " elementos" << endl;
    }
    
    cout << "\nResultado final: Los vectores " 
         << (sonIdenticos ? "SÍ" : "NO") 
         << " son iguales." << endl;
    
    return 0;
}
