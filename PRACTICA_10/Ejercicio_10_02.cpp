// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 18/11/2024

// Número de ejercicio: 2

// Problema planteado:Define una estructura llamada Atleta.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definimos la estructura Atleta con sus campos
struct Atleta {
    string nombre;       // Nombre del atleta
    string pais;         // País del atleta
    int edad;            // Edad del atleta
    int mejor_tiempo;    // Mejor tiempo del atleta en segundos
};

int main() {
    int n;
    cout << "Ingrese la cantidad de atletas: ";
    cin >> n;

    vector<Atleta> atletas(n); // Vector para almacenar los datos de los atletas

    // Ingreso de datos de cada atleta
    for (int i = 0; i < n; i++) {
        cout << "\nAtleta #" << i + 1 << ":\n";
        cout << "Nombre: ";
        cin.ignore(); // Limpiamos el buffer
        getline(cin, atletas[i].nombre); // Obtenemos el nombre

        cout << "Pais: ";
        getline(cin, atletas[i].pais); // Obtenemos el país

        cout << "Edad: ";
        cin >> atletas[i].edad; // Obtenemos la edad

        cout << "Mejor tiempo (en segundos): ";
        cin >> atletas[i].mejor_tiempo; // Obtenemos el mejor tiempo
    }

    // Encontramos el atleta con el mejor tiempo
    int mejorIndice = 0; // Índice del atleta con el mejor tiempo
    for (int i = 1; i < n; i++) {
        if (atletas[i].mejor_tiempo < atletas[mejorIndice].mejor_tiempo) {
            mejorIndice = i; // Actualizamos el índice si encontramos un mejor tiempo
        }
    }

    // Mostramos el nombre y país del atleta con el mejor tiempo
    cout << "\nEl atleta con el mejor tiempo es:\n";
    cout << "Nombre: " << atletas[mejorIndice].nombre << endl;
    cout << "Pais: " << atletas[mejorIndice].pais << endl;

    return 0;
}
