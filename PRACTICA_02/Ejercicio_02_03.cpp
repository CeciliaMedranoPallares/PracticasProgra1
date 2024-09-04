// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 30/08/2024
// Número de ejercicio: 3.
// Problema planteado: Cálculo de la distancia entre dos puntos en el plano cartesiano.

#include <iostream>
#include <cmath> // Necesario para sqrt() y pow()
using namespace std;

// Función para calcular la distancia entre dos puntos
float calcularDistancia(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    system("cls");
    float x1, y1, x2, y2;
    float distancia;

    // Leer las coordenadas del primer punto
    cout << "Introduce las coordenadas del primer punto (x1 y1): ";
    cin >> x1 >> y1;

    // Leer las coordenadas del segundo punto
    cout << "Introduce las coordenadas del segundo punto (x2 y2): ";
    cin >> x2 >> y2;

    // Llamar a la función calcularDistancia y almacenar el resultado en distancia
    distancia = calcularDistancia(x1, y1, x2, y2);

    // Mostrar el resultado
    cout << "La distancia entre los dos puntos es: " << distancia << endl;

    return 0;
}

