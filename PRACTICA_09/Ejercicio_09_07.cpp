
// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 9/11/2024

// Número de ejercicio: 7

// Problema planteado:Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38,49,..., para n términos.
#include <iostream>
#include <vector>
using namespace std;

/**
 * Función recursiva que genera el n-ésimo término de la secuencia
 * 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,...
 * 
 * Patrón de la secuencia:
 * - Los primeros 6 términos siguen potencias de 2: 1,1,2,4,8,16
 * - A partir del 7º término:
 *   término(n) = término(n-1) + término(n-3)
 * 
 * @param n Posición del término a calcular (comenzando desde 1)
 * @param secuencia Vector que almacena los términos calculados
 * @return El n-ésimo término de la secuencia
 */
int generarTermino(int n, vector<int>& secuencia) {
    // Si ya calculamos este término, lo devolvemos
    if (n <= secuencia.size()) {
        return secuencia[n-1];
    }
    
    // Calculamos el nuevo término
    int nuevoTermino;
    
    // Los primeros 6 términos siguen potencias de 2
    if (n <= 6) {
        if (n <= 2) {
            nuevoTermino = 1;
        } else {
            nuevoTermino = 1 << (n-2);  // Equivalente a 2^(n-2)
        }
    } else {
        // A partir del 7º término: término(n) = término(n-1) + término(n-3)
        nuevoTermino = generarTermino(n-1, secuencia) + generarTermino(n-3, secuencia);
    }
    
    // Almacenamos el término calculado
    secuencia.push_back(nuevoTermino);
    return nuevoTermino;
}

int main() {
    int n;
    
    // Solicitar el número de términos
    cout << "Ingrese el número de términos a generar: ";
    cin >> n;
    
    // Validar la entrada
    if (n <= 0) {
        cout << "Error: El número de términos debe ser positivo." << endl;
        return 1;
    }
    
    // Vector para almacenar la secuencia
    vector<int> secuencia;
    
    // Generar y mostrar la secuencia
    cout << "\nSecuencia generada:" << endl;
    for (int i = 1; i <= n; i++) {
        int termino = generarTermino(i, secuencia);
        cout << termino;
        
        // Formateo de salida
        if (i < n) {
            cout << ", ";
        }
        
        // Nueva línea cada 10 términos para mejor legibilidad
        if (i % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;
    
    // Mostrar análisis de la secuencia
    cout << "\nAnálisis de la secuencia:" << endl;
    cout << "- Primeros 6 términos son potencias de 2: 1,1,2,4,8,16" << endl;
    cout << "- A partir del 7º término:" << endl;
    
    if (n > 6) {
        for (int i = 7; i <= n; i++) {
            cout << "  Término " << i << " = " 
                 << secuencia[i-1] << " = " 
                 << secuencia[i-2] << " + " 
                 << secuencia[i-4] << endl;
        }
    }
    
    return 0;
}
