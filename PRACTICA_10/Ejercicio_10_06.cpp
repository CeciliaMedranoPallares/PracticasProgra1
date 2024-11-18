// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 18/11/2024

// Número de ejercicio: 6
// Problema planteado:Define una estructura llamada Empleado
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definimos la estructura Empleado con los campos solicitados
struct Empleado {
    string nombre;    // Nombre del empleado
    int id;           // ID del empleado
    double sueldo;    // Sueldo del empleado
    int antiguedad;   // Antigüedad en años
};

// Función para contar cuántos empleados tienen un sueldo mayor a un valor dado
int contarEmpleadosConSueldoMayor(const vector<Empleado>& empleados, double sueldoMinimo) {
    int contador = 0;
    for (const auto& empleado : empleados) {
        if (empleado.sueldo > sueldoMinimo) {
            contador++;
        }
    }
    return contador;
}

// Función para calcular el promedio de antigüedad de todos los empleados
double calcularPromedioAntiguedad(const vector<Empleado>& empleados) {
    if (empleados.empty()) return 0.0; // Evita división por cero

    int sumaAntiguedad = 0;
    for (const auto& empleado : empleados) {
        sumaAntiguedad += empleado.antiguedad;
    }
    return static_cast<double>(sumaAntiguedad) / empleados.size();
}

int main() {
    int n;
    cout << "Ingrese la cantidad de empleados: ";
    cin >> n;

    vector<Empleado> empleados(n); // Vector para almacenar los datos de los empleados

    // Ingreso de datos de cada empleado
    for (int i = 0; i < n; i++) {
        cout << "\nEmpleado #" << i + 1 << ":\n";
        
        cout << "Nombre: ";
        cin.ignore(); // Limpiamos el buffer
        getline(cin, empleados[i].nombre);

        cout << "ID: ";
        cin >> empleados[i].id;

        cout << "Sueldo: ";
        cin >> empleados[i].sueldo;

        cout << "Antigüedad (en años): ";
        cin >> empleados[i].antiguedad;
    }

    // Solicitar un valor de sueldo al usuario
    double sueldoMinimo;
    cout << "\nIngrese un valor de sueldo para contar empleados con sueldo mayor: ";
    cin >> sueldoMinimo;

    // Llamada a la función para contar empleados con sueldo mayor al valor dado
    int empleadosConSueldoMayor = contarEmpleadosConSueldoMayor(empleados, sueldoMinimo);
    cout << "Cantidad de empleados con sueldo mayor a " << sueldoMinimo << ": " << empleadosConSueldoMayor << endl;

    // Llamada a la función para calcular el promedio de antigüedad
    double promedioAntiguedad = calcularPromedioAntiguedad(empleados);
    cout << "Promedio de antigüedad de los empleados: " << promedioAntiguedad << " años" << endl;

    return 0;
}

