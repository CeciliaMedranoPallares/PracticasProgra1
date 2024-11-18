// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 18/11/2024

// Número de ejercicio: 9

// Problema planteado:Calificaciones Curso
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// Estructura para almacenar las notas de un alumno
struct Alumno {
    string nombre;  // Nombre del alumno
    double T1, T2, T3, T4;  // Notas parciales
    double EF;              // Examen final
    double NF;              // Nota final
};

// Función para calcular la nota de presentación (NP)
double calcularNotaPresentacion(double T1, double T2, double T3, double T4) {
    return (T1 + T2 + T3 + T4) / 4;
}

// Función para calcular la nota final (NF)
double calcularNotaFinal(double NP, double EF) {
    return 0.7 * NP + 0.3 * EF;
}

// Función para ingresar los datos de los alumnos y calcular sus notas finales
void ingresarAlumnos(vector<Alumno>& alumnos, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        Alumno alumno;
        cout << "\nIngrese el nombre del alumno #" << i + 1 << ": ";
        cin.ignore();
        getline(cin, alumno.nombre);
        
        cout << "Nota T1: "; cin >> alumno.T1;
        cout << "Nota T2: "; cin >> alumno.T2;
        cout << "Nota T3: "; cin >> alumno.T3;
        cout << "Nota T4: "; cin >> alumno.T4;
        cout << "Examen Final (EF): "; cin >> alumno.EF;

        double NP = calcularNotaPresentacion(alumno.T1, alumno.T2, alumno.T3, alumno.T4);
        alumno.NF = calcularNotaFinal(NP, alumno.EF);
        
        alumnos.push_back(alumno);
    }
}

// Función para calcular el promedio, la nota mínima y la nota máxima
void calcularEstadisticas(const vector<Alumno>& alumnos, double& promedio, double& notaMinima, double& notaMaxima) {
    double sumaNotas = 0;
    notaMinima = numeric_limits<double>::max();
    notaMaxima = numeric_limits<double>::lowest();

    for (const auto& alumno : alumnos) {
        sumaNotas += alumno.NF;
        if (alumno.NF < notaMinima) notaMinima = alumno.NF;
        if (alumno.NF > notaMaxima) notaMaxima = alumno.NF;
    }
    promedio = sumaNotas / alumnos.size();
}

// Función para mostrar las notas finales de los alumnos y las estadísticas
void mostrarResultados(const vector<Alumno>& alumnos, double promedio, double notaMinima, double notaMaxima) {
    cout << "\nResultados:\n";
    for (const auto& alumno : alumnos) {
        cout << "Alumno: " << alumno.nombre << " - Nota Final (NF): " << alumno.NF << endl;
    }
    cout << "\nEstadísticas del curso:\n";
    cout << "Promedio de notas finales: " << promedio << endl;
    cout << "Nota mínima: " << notaMinima << endl;
    cout << "Nota máxima: " << notaMaxima << endl;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;

    vector<Alumno> alumnos;
    ingresarAlumnos(alumnos, n);

    double promedio, notaMinima, notaMaxima;
    calcularEstadisticas(alumnos, promedio, notaMinima, notaMaxima);

    mostrarResultados(alumnos, promedio, notaMinima, notaMaxima);

    return 0;
}
