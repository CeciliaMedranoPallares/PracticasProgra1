// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 25/11/2024

// Número de ejercicio: 3

// Problema planteado: Almacenamiento de registros de estudiantes
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Estructura para representar un estudiante
struct Estudiante {
    string nombre;
    int edad;
    float calificacion;
};

// Prototipos de las funciones
void agregarEstudiante(const string& archivo);
void mostrarEstudiantes(const string& archivo);

int main() {
    const string archivo = "registros.txt";

    // Menú simple
    int opcion;
    do {
        cout << "1. Agregar estudiante\n";
        cout << "2. Mostrar estudiantes\n";
        cout << "3. Salir\n";
        cout << "Selecciona una opción: ";
        cin >> opcion;
        cin.ignore();  // Para ignorar el salto de línea después de la opción

        switch (opcion) {
            case 1:
                agregarEstudiante(archivo);
                break;
            case 2:
                mostrarEstudiantes(archivo);
                break;
            case 3:
                cout << "¡Hasta luego!\n";
                break;
            default:
                cout << "Opción inválida. Inténtalo nuevamente.\n";
        }
    } while (opcion != 3);

    return 0;
}

// Función para agregar un estudiante al archivo
void agregarEstudiante(const string& archivo) {
    Estudiante estudiante;

    // Ingresar datos del estudiante
    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, estudiante.nombre);
    cout << "Ingrese la edad del estudiante: ";
    cin >> estudiante.edad;
    cout << "Ingrese la calificación del estudiante: ";
    cin >> estudiante.calificacion;
    cin.ignore();  // Limpiar el buffer de entrada

    // Abrir el archivo en modo append (agregar al final)
    ofstream archivoSalida(archivo, ios::app);
    if (!archivoSalida) {
        cerr << "No se pudo abrir el archivo para escribir.\n";
        return;
    }

    // Escribir los datos del estudiante en el archivo
    archivoSalida << estudiante.nombre << "\n" << estudiante.edad << "\n" << estudiante.calificacion << "\n";

    archivoSalida.close();  // Cerrar el archivo
    cout << "Estudiante agregado correctamente.\n";
}

// Función para mostrar todos los estudiantes del archivo
void mostrarEstudiantes(const string& archivo) {
    ifstream archivoEntrada(archivo);  // Abrir el archivo en modo lectura
    if (!archivoEntrada) {
        cerr << "No se pudo abrir el archivo para leer.\n";
        return;
    }

    string nombre;
    int edad;
    float calificacion;

    cout << "Registros de estudiantes:\n";
    while (getline(archivoEntrada, nombre) && archivoEntrada >> edad >> calificacion) {
        archivoEntrada.ignore();  // Ignorar el salto de línea después de la calificación
        cout << "Nombre: " << nombre << ", Edad: " << edad << ", Calificación: " << calificacion << endl;
    }

    archivoEntrada.close();  // Cerrar el archivo
}
