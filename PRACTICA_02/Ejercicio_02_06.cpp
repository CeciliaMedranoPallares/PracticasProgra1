// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 6
// Problema planteado: Leer una hora (en formato de 24 horas) y realizar una función para determinar si corresponde a la mañana, tarde, noche o madrugada.
#include <iostream>
using namespace std;

// Función para determinar la parte del día
int horaDia(int hora) {
    if (hora >= 0 && hora <= 5) {
        cout << "madrugada" << endl;
    } else if (hora >= 6 && hora <= 12) {
        cout << "mañana" << endl;
    } else if (hora >= 13 && hora <= 18) {
        cout << "tarde" << endl;
    } else if (hora >= 19 && hora <= 23) {
        cout << "noche" << endl;
    } else {
        cout << "Ingrese una hora válida" << endl;
    }
    return 1; 
}

int main() {
    system("cls");
    int hora=0;
    // Pedir la hora por teclado
    cout << "Introduce la hora (0-23): ";
    cin >> hora;
    // Imprime a que parte del dia correspnde
    cout << "La hora corresponde a " <<horaDia(hora);
    return 0;
}
