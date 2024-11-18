// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 18/11/2024

// Número de ejercicio: 3

// Problema planteado:Desarrolle una estructura que guarde los datos de los n alumnos
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definimos la estructura Alumno con los campos solicitados
struct Alumno {
    int cedula;                     // Cédula del alumno
    string nombre;                  // Nombre del alumno
    string apellido;                // Apellido del alumno
    int edad;                       // Edad del alumno
    string profesion;               // Profesión del alumno
    string lugar_nacimiento;        // Lugar de nacimiento
    string direccion;               // Dirección
    int telefono;                   // Teléfono
};

int main() {
    int n;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;

    vector<Alumno> alumnos(n); // Vector para almacenar los datos de los alumnos

    // Ingreso de datos de cada alumno
    for (int i = 0; i < n; i++) {
        cout << "\nAlumno #" << i + 1 << ":\n";
        
        cout << "Cédula: ";
        cin >> alumnos[i].cedula;

        cout << "Nombre: ";
        cin.ignore(); // Limpiamos el buffer
        getline(cin, alumnos[i].nombre);

        cout << "Apellido: ";
        getline(cin, alumnos[i].apellido);

        cout << "Edad: ";
        cin >> alumnos[i].edad;

        cout << "Profesión: ";
        cin.ignore();
        getline(cin, alumnos[i].profesion);

        cout << "Lugar de nacimiento: ";
        getline(cin, alumnos[i].lugar_nacimiento);

        cout << "Dirección: ";
        getline(cin, alumnos[i].direccion);

        cout << "Teléfono: ";
        cin >> alumnos[i].telefono;
    }

    // Mostramos los datos de cada alumno
    cout << "\nDatos de los alumnos ingresados:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nAlumno #" << i + 1 << ":\n";
        cout << "Cédula: " << alumnos[i].cedula << endl;
        cout << "Nombre: " << alumnos[i].nombre << endl;
        cout << "Apellido: " << alumnos[i].apellido << endl;
        cout << "Edad: " << alumnos[i].edad << endl;
        cout << "Profesión: " << alumnos[i].profesion << endl;
        cout << "Lugar de nacimiento: " << alumnos[i].lugar_nacimiento << endl;
        cout << "Dirección: " << alumnos[i].direccion << endl;
        cout << "Teléfono: " << alumnos[i].telefono << endl;
    }

    return 0;
}

