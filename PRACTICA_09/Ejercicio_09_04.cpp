// Materia: Programación I, Paralelo 1

// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 9/11/2024

// Número de ejercicio: 4

// Problema planteado:función recursiva que reciba un vector de enteros y un número a buscar, y devuelva true si el número se encuentra en el vector o false en caso contrario.
#include <iostream>
#include <vector>
using namespace std;

/**
 * Función recursiva que busca un número en un vector
 * vector Vector donde se realizará la búsqueda
 *  numero Número a buscar
 *  inicio Índice desde donde comenzar la búsqueda
 *  true si encuentra el número, false en caso contrario
 * 
 * Ejemplo: buscarNumero({1,2,3,4}, 3, 0)
 * Primera llamada: 1 != 3, buscarNumero({1,2,3,4}, 3, 1)
 * Segunda llamada: 2 != 3, buscarNumero({1,2,3,4}, 3, 2)
 * Tercera llamada: 3 == 3, retorna true
 */
bool buscarNumero(const vector<int>& vec, int numero, int inicio) {
    // Caso base 1: si llegamos al final del vector sin encontrar el número
    if (inicio >= vec.size()) {
        return false;
    }
    
    // Caso base 2: si encontramos el número
    if (vec[inicio] == numero) {
        return true;
    }
    
    // Paso recursivo: buscar en el siguiente elemento
    return buscarNumero(vec, numero, inicio + 1);
}

// Función wrapper para facilitar el uso
bool buscarNumero(const vector<int>& vec, int numero) {
    return buscarNumero(vec, numero, 0);
}

int main() {
    vector<int> numeros;
    int n, numero;
    
    // Solicitar tamaño del vector
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    
    // Llenar el vector
    cout << "Ingrese los " << n << " números:" << endl;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        numeros.push_back(temp);
    }
    
    // Solicitar número a buscar
    cout << "Ingrese el número a buscar: ";
    cin >> numero;
    
    // Realizar la búsqueda y mostrar resultado
    if (buscarNumero(numeros, numero)) {
        cout << "El número " << numero << " SÍ se encuentra en el vector." << endl;
    } else {
        cout << "El número " << numero << " NO se encuentra en el vector." << endl;
    }
    
    return 0;
}
