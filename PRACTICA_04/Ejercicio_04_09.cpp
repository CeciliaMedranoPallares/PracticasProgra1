// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 17/09/2024
// Número de ejercicio: 9.
// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de este arreglo determine la desviación típica.
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Función para calcular la media de un conjunto de edades
double calcularMedia(const vector<int>& edades) {
    // Inicializar la suma de las edades en 0
    int suma = 0;
    
    // Recorrer cada edad y sumarla a la suma total
    for (int edad : edades) {
        suma += edad;
    }
    
    // Calcular la media dividiendo la suma entre el número de edades
    return static_cast<double>(suma) / edades.size();
}

// Función para calcular la desviación estándar de un conjunto de edades
double calcularDesviacionEstandar(const vector<int>& edades) {
    // Calcular la media de las edades
    double media = calcularMedia(edades);
    
    // Inicializar la suma de los cuadrados de las diferencias
    double sumaCuadradosDiferencias = 0;
    
    // Recorrer cada edad, calcular la diferencia con la media, elevarla al cuadrado y sumarla
    for (int edad : edades) {
        sumaCuadradosDiferencias += pow(edad - media, 2);
    }
    
    // Calcular la desviación estándar como la raíz cuadrada de la varianza
    return sqrt(sumaCuadradosDiferencias / edades.size());
}

int main() {
    // Crear un vector para almacenar las edades
    vector<int> edades;
    int edad;

    // Solicitar al usuario que ingrese las edades
    cout << "Ingrese las edades (ingrese -1 para terminar):" << endl;
    
    // Leer las edades hasta que se ingrese -1
    cin >> edad;
    while (edad != -1) {
        edades.push_back(edad);
        cin >> edad;
    }

    // Verificar si se ingresaron edades
    if (edades.empty()) {
        cout << "No se ingresaron edades." << endl;
    } else {
        // Calcular la desviación estándar y mostrarla
        double desviacionEstandar = calcularDesviacionEstandar(edades);
        cout << "La desviación estándar de las edades es: " << desviacionEstandar << endl;
    }

    return 0;
}
