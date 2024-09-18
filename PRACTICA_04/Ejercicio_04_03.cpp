// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 17/09/2024
// Número de ejercicio: 3.
// Problema planteado:Escriba un programa para introducir los N números enteros en un arreglo llamado calificaciones.
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Función para leer las calificaciones
vector<int> leerCalificaciones(int N) {
    vector<int> calificaciones(N);
    cout << "Ingrese las " << N << " calificaciones:\n";
    for (int i = 0; i < N; i++) {
        cin >> calificaciones[i];
    }
    return calificaciones;
}

// Función para calcular el promedio
double calcularPromedio(const vector<int>& calificaciones) {
    double suma = 0;
    for (int calif : calificaciones) {
        suma += calif;
    }
    return suma / calificaciones.size();
}

// Función para calcular las desviaciones
vector<double> calcularDesviaciones(const vector<int>& calificaciones, double promedio) {
    vector<double> desviaciones(calificaciones.size());
    for (size_t i = 0; i < calificaciones.size(); i++) {
        desviaciones[i] = calificaciones[i] - promedio;
    }
    return desviaciones;
}

// Función para calcular la varianza
double calcularVarianza(const vector<double>& desviaciones) {
    double suma_desviaciones_cuadradas = 0;
    for (double desv : desviaciones) {
        suma_desviaciones_cuadradas += pow(desv, 2);
    }
    return suma_desviaciones_cuadradas / desviaciones.size();
}

// Función para mostrar resultados
void mostrarResultados(const vector<int>& calificaciones, const vector<double>& desviaciones, double promedio, double varianza) {
    cout << "\nCalificación - Desviación\n";
    cout << "-------------------------\n";
    for (size_t i = 0; i < calificaciones.size(); i++) {
        cout << calificaciones[i]<<"-"<< desviaciones[i] << endl;
    }
    cout << "\nPromedio: " << promedio << endl;
    cout << "Varianza: " << varianza << endl;
}

int main() {
    int N;
    cout << "Ingrese el número de calificaciones: ";
    cin >> N;

    vector<int> calificaciones = leerCalificaciones(N);
    double promedio = calcularPromedio(calificaciones);
    vector<double> desviaciones = calcularDesviaciones(calificaciones, promedio);
    double varianza = calcularVarianza(desviaciones);

    mostrarResultados(calificaciones, desviaciones, promedio, varianza);

    return 0;
}
