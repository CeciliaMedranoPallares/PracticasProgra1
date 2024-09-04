// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 30/08/2024
// Número de ejercicio: 2
// Problema planteado: Cálculo de la hipotenusa.

#include <iostream>
#include <cmath> // Necesario para sqrt() y pow()
using namespace std;

// Función para calcular la hipotenusa
float pitagoras(int cateto1, int cateto2) {
    return sqrt(pow(cateto1, 2) + pow(cateto2, 2));
}

int main() {
    system("cls");
    int cateto1, cateto2;
    float hipot;

    cout << "Introduce el valor del primer cateto: ";
    cin >> cateto1;
    cout << "Introduce el valor del segundo cateto: ";
    cin >> cateto2;

    // Llamar a la función Pitagoras y almacenar el resultado en hipot
    hipot = pitagoras(cateto1, cateto2);

    // Mostrar el resultado
    cout << "El valor de la hipotenusa con los catetos dados es: " << hipot << endl;

    return 0;
}


