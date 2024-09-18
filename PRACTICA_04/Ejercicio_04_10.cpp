// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 17/09/2024
// Número de ejercicio: 10.
// Problema planteado:Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un desempeño mayor con relación al promedio del curso.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Función para calcular la media
double calcularPromedio(const vector<double>& calificaciones) {
    double suma = 0;
    for (double nota : calificaciones) {
        suma += nota;
    }
    return suma / calificaciones.size();
}

// Función para encontrar el índice de la calificación más alta
int encontrarMayor(const vector<double>& calificaciones) {
    int indiceMayor = 0;
    for (size_t i = 1; i < calificaciones.size(); i++) {
        if (calificaciones[i] > calificaciones[indiceMayor]) {
            indiceMayor = i;
        }
    }
    return indiceMayor;
}

// Función para encontrar el índice de la calificación más baja
int encontrarMenor(const vector<double>& calificaciones) {
    int indiceMenor = 0;
    for (size_t i = 1; i < calificaciones.size(); i++) {
        if (calificaciones[i] < calificaciones[indiceMenor]) {
            indiceMenor = i;
        }
    }
    return indiceMenor;
}

// Función para calcular el promedio por carrera
void calcularPromedioPorCarrera(const vector<double>& calificaciones, const vector<string>& carreras) {
    double sumaCarreras[10] = {0}; // Suponiendo que hay hasta 10 carreras
    int contadorCarreras[10] = {0};
    int numCarreras = 0;

    for (size_t i = 0; i < calificaciones.size(); i++) {
        bool encontrada = false;
        for (int j = 0; j < numCarreras; j++) {
            if (carreras[i] == carreras[j]) {
                sumaCarreras[j] += calificaciones[i];
                contadorCarreras[j]++;
                encontrada = true;
                break; // Si se encontró la carrera, no hay necesidad de seguir buscando
            }
        }
        if (!encontrada) {
            sumaCarreras[numCarreras] = calificaciones[i];
            contadorCarreras[numCarreras] = 1;
            numCarreras++;
        }
    }

    double mejorPromedio = 0;
    string carreraMejor = "";

    for (int i = 0; i < numCarreras; i++) {
        double promedioCarrera = sumaCarreras[i] / contadorCarreras[i];
        if (promedioCarrera > mejorPromedio) {
            mejorPromedio = promedioCarrera;
            carreraMejor = carreras[i];
        }
    }

    cout << "La carrera con mejor desempeño es: " << carreraMejor << " con un promedio de " << mejorPromedio << endl;
}

int main() {
    const int MAX_ESTUDIANTES = 100; // Máximo número de estudiantes
    vector<string> nombres(MAX_ESTUDIANTES);
    vector<double> calificaciones(MAX_ESTUDIANTES);
    vector<string> carreras(MAX_ESTUDIANTES);
    
    int cantidad = 0;

    cout << "Ingrese el número de estudiantes (máximo 100): ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "Nombre del estudiante " << i + 1 << ": ";
        cin >> nombres[i];
        cout << "Calificación de " << nombres[i] << ": ";
        cin >> calificaciones[i];
        cout << "Carrera de " << nombres[i] << ": ";
        cin >> carreras[i];
    }

    // Calcular el promedio
    double promedio = calcularPromedio(calificaciones);
    
    // Encontrar mayor y menor
    int indiceMayor = encontrarMayor(calificaciones);
    int indiceMenor = encontrarMenor(calificaciones);

    cout << "El alumno con la mayor calificación es: " << nombres[indiceMayor] << " con " << calificaciones[indiceMayor] << endl;
    cout << "El alumno con la menor calificación es: " << nombres[indiceMenor] << " con " << calificaciones[indiceMenor] << endl;

    // Calcular promedio por carrera
    calcularPromedioPorCarrera(calificaciones, carreras);

    return 0;
}
