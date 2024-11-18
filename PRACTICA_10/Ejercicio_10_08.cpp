// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 18/11/2024

// Número de ejercicio: 8

// Problema planteado:El viceministerio de deportes hace una olimpiada a nivel nacional de los siguientes deportes
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

// Estructura para almacenar la información de cada atleta
struct Atleta {
    string nombre;         // Nombre del atleta
    string departamento;   // Departamento que representa
    string deporte;        // Deporte que practica
    int medallas;          // Número de medallas ganadas
};

// Función para registrar los atletas
void registrarAtletas(vector<Atleta>& atletas, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        Atleta atleta;
        cout << "\nAtleta #" << i + 1 << ":\n";
        
        cout << "Nombre: ";
        cin.ignore();
        getline(cin, atleta.nombre);

        cout << "Departamento: ";
        getline(cin, atleta.departamento);

        cout << "Deporte (Tiro con arco, Atletismo, Boxeo, Ciclismo, Natación, Esgrima): ";
        getline(cin, atleta.deporte);

        cout << "Medallas ganadas: ";
        cin >> atleta.medallas;

        atletas.push_back(atleta);
    }
}

// Función para contabilizar medallas por departamento y deporte
void contabilizarMedallas(const vector<Atleta>& atletas, unordered_map<string, unordered_map<string, int>>& medallero) {
    for (const auto& atleta : atletas) {
        // Acumulamos las medallas en el departamento y deporte correspondiente
        medallero[atleta.departamento][atleta.deporte] += atleta.medallas;
    }
}

// Función para mostrar el medallero final por departamento
void mostrarMedallero(const unordered_map<string, unordered_map<string, int>>& medallero) {
    cout << "\nMedallero Nacional por Departamento:\n";
    for (const auto& depto : medallero) {
        cout << "\nDepartamento: " << depto.first << endl;
        for (const auto& deporte : depto.second) {
            cout << "  Deporte: " << deporte.first << " - Medallas: " << deporte.second << endl;
        }
    }
}

int main() {
    int n;
    cout << "Ingrese la cantidad de atletas a registrar: ";
    cin >> n;

    vector<Atleta> atletas;
    unordered_map<string, unordered_map<string, int>> medallero;

    // Registrar a los atletas
    registrarAtletas(atletas, n);

    // Contabilizar las medallas ganadas por cada atleta en el medallero
    contabilizarMedallas(atletas, medallero);

    // Mostrar el medallero final por departamento
    mostrarMedallero(medallero);

    return 0;
}
