// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 18/11/2024

// Número de ejercicio: 1

// Problema planteado:Define una estructura llamada Libro.
#include <iostream>
#include <string>

using namespace std;

// Definimos la estructura Libro con sus campos
struct Libro {
    string titulo;             // Título del libro
    string autor;              // Autor del libro
    int anio_publicacion;      // Año de publicación
    bool disponible;           // Disponibilidad (true si está disponible, false si no)
};

int main() {
    Libro libro; // Creamos una variable del tipo Libro para almacenar los datos

    // Solicitamos al usuario que ingrese los datos del libro
    cout << "Ingrese el titulo del libro: ";
    getline(cin, libro.titulo); // Usamos getline para permitir títulos con espacios

    cout << "Ingrese el autor del libro: ";
    getline(cin, libro.autor); // Usamos getline para permitir nombres con espacios

    cout << "Ingrese el anio de publicacion: ";
    cin >> libro.anio_publicacion; // Obtenemos el año de publicación

    cout << "¿El libro está disponible? (1 para sí, 0 para no): ";
    cin >> libro.disponible; // Obtenemos la disponibilidad como booleano

    // Mostramos los datos ingresados
    cout << "\nDatos del libro ingresado:\n";
    cout << "Titulo: " << libro.titulo << endl;
    cout << "Autor: " << libro.autor << endl;
    cout << "Anio de publicacion: " << libro.anio_publicacion << endl;

    // Verificamos si el libro está disponible
    if (libro.disponible) {
        cout << "Disponibilidad: Disponible\n";
    } else {
        cout << "Disponibilidad: No disponible\n";
    }

    return 0;
}
