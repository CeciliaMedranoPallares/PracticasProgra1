// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 18/11/2024

// Número de ejercicio: 4

// Problema planteado:Se tiene una lista de empleados de la UCB y esta se almacena en una variable tipo struct llamada “empleado”.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definimos la estructura Empleado con los campos solicitados
struct Empleado {
    string nombre;       // Nombre del empleado
    string genero;       // Género del empleado
    double salario;      // Salario del empleado (decimal)
};

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

        cout << "Genero: ";
        getline(cin, empleados[i].genero);

        cout << "Salario: ";
        cin >> empleados[i].salario;
    }

    // Encontramos el empleado con el menor y mayor salario
    int indiceMenor = 0, indiceMayor = 0;

    for (int i = 1; i < n; i++) {
        if (empleados[i].salario < empleados[indiceMenor].salario) {
            indiceMenor = i;
        }
        if (empleados[i].salario > empleados[indiceMayor].salario) {
            indiceMayor = i;
        }
    }

    // Mostramos los datos del empleado con el menor salario
    cout << "\nEmpleado con el menor salario:\n";
    cout << "Nombre: " << empleados[indiceMenor].nombre << endl;
    cout << "Genero: " << empleados[indiceMenor].genero << endl;
    cout << "Salario: " << empleados[indiceMenor].salario << endl;

    // Mostramos los datos del empleado con el mayor salario
    cout << "\nEmpleado con el mayor salario:\n";
    cout << "Nombre: " << empleados[indiceMayor].nombre << endl;
    cout << "Genero: " << empleados[indiceMayor].genero << endl;
    cout << "Salario: " << empleados[indiceMayor].salario << endl;

    return 0;
}
