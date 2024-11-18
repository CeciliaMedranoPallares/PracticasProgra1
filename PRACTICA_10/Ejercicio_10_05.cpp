// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 18/11/2024

// Número de ejercicio: 5

// Problema planteado: Sistema de gestión de películas

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definimos la estructura Pelicula con los campos solicitados
struct Pelicula {
    string titulo;       // Título de la película
    string director;     // Director de la película
    int duracion;        // Duración de la película en minutos
    int anio_estreno;    // Año de estreno de la película
    string genero;       // Género de la película
};

int main() {
    int n;
    cout << "Ingrese la cantidad de películas: ";
    cin >> n;

    vector<Pelicula> peliculas(n); // Vector para almacenar las películas

    // Ingreso de datos de cada película
    for (int i = 0; i < n; i++) {
        cout << "\nPelicula #" << i + 1 << ":\n";
        
        cout << "Título: ";
        cin.ignore(); // Limpiamos el buffer
        getline(cin, peliculas[i].titulo);

        cout << "Director: ";
        getline(cin, peliculas[i].director);

        cout << "Duración (en minutos): ";
        cin >> peliculas[i].duracion;

        cout << "Año de estreno: ";
        cin >> peliculas[i].anio_estreno;

        cout << "Género: ";
        cin.ignore();
        getline(cin, peliculas[i].genero);
    }

    // Mostrar películas por género específico
    string generoBuscado;
    cout << "\nIngrese el género que desea buscar: ";
    cin.ignore(); // Limpiamos el buffer
    getline(cin, generoBuscado);

    cout << "\nPelículas del género '" << generoBuscado << "':\n";
    bool encontradoGenero = false; // Para verificar si encontramos películas del género
    for (const auto& pelicula : peliculas) {
        if (pelicula.genero == generoBuscado) {
            cout << "Título: " << pelicula.titulo << ", Director: " << pelicula.director
                 << ", Duración: " << pelicula.duracion << " minutos, Año: " << pelicula.anio_estreno << endl;
            encontradoGenero = true;
        }
    }
    if (!encontradoGenero) {
        cout << "No se encontraron películas de este género.\n";
    }

    // Mostrar películas por director específico
    string directorBuscado;
    cout << "\nIngrese el director que desea buscar: ";
    getline(cin, directorBuscado);

    cout << "\nPelículas dirigidas por '" << directorBuscado << "':\n";
    bool encontradoDirector = false; // Para verificar si encontramos películas del director
    for (const auto& pelicula : peliculas) {
        if (pelicula.director == directorBuscado) {
            cout << "Título: " << pelicula.titulo << ", Género: " << pelicula.genero
                 << ", Duración: " << pelicula.duracion << " minutos, Año: " << pelicula.anio_estreno << endl;
            encontradoDirector = true;
        }
    }
    if (!encontradoDirector) {
        cout << "No se encontraron películas dirigidas por este director.\n";
    }

    return 0;
}
