// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 17/09/2024
// Número de ejercicio: 1
// Problema planteado:Escriba declaraciones de arreglo. 
#include <iostream>
#include <vector>

using namespace std;

// Funciones para inicializar los vectores
vector<double> crearVectoresVoltajes(int n) {
    return vector<double>(n);
}

vector<double> crearVectoresTemperaturas(int n) {
    return vector<double>(n);
}

vector<char> crearVectoresCodigos(int n) {
    return vector<char>(n);
}

vector<int> crearVectoresAños(int n) {
    return vector<int>(n);
}

vector<double> crearVectoresVelocidades(int n) {
    return vector<double>(n);
}

vector<double> crearVectoresDistancias(int n) {
    return vector<double>(n);
}

vector<int> crearVectoresCodigosEnteros(int n) {
    return vector<int>(n);
}

int main() {
    // a. Una lista de 100 voltajes de precisión doble
    vector<double> voltajes = crearVectoresVoltajes(100);

    // b. Una lista de 50 temperaturas de precisión doble
    vector<double> temperaturas = crearVectoresTemperaturas(50);

    // c. Una lista de 30 caracteres, cada uno representando un código
    vector<char> codigos = crearVectoresCodigos(30);

    // d. Una lista de 100 años en número entero
    vector<int> años = crearVectoresAños(100);

    // e. Una lista de 32 velocidades de precisión doble
    vector<double> velocidades = crearVectoresVelocidades(32);

    // f. Una lista de 1000 distancias de precisión doble
    vector<double> distancias = crearVectoresDistancias(1000);

    // g. Una lista de 6 números de código enteros
    vector<int> codigosEnteros = crearVectoresCodigosEnteros(6);
    return 0;}
