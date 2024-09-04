// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 30/08/2024
// Número de ejercicio: 1
// Problema planteado: Leer una cantidad de segundos y realizar una función para convertirla a horas, minutos y segundos.

#include <iostream>
using namespace std;

// Función para convertir segundos a horas, minutos y segundos
void conversion(float seg, int &hrs, int &min, int &sec) {
    hrs = seg / 3600; // Convertir segundos a horas
    min = (seg - hrs * 3600) / 60; // Convertir el resto a minutos
    sec = seg - hrs * 3600 - min * 60; // Calcular los segundos restantes
}

int main() {
    system("cls");
    float seg;
    int hrs, min, sec;

    cout << "Introduce los segundos que deseas convertir: ";
    cin >> seg;

    // Llamar a la función de conversión
    conversion(seg, hrs, min, sec);

    // Mostrar los resultados
    cout << "Los segundos totales equivalen a " << hrs << " horas, ";
    cout << min << " minutos y " << sec << " segundos." << endl;

    return 0;
}
