// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 10
// Problema planteado:Leer un número de cuatro dígitos y realizar una función para determinar si al menos dos de los dígitos son iguales.
#include <iostream>
using namespace std;

// Función para verificar si al menos dos dígitos son iguales
bool Digitosigual(int num) {
    // Extraer cada dígito del número
    int x1 = num / 1000; // Primer dígito
    int x2 = (num / 100) % 10; // Segundo dígito
    int x3 = (num / 10) % 10; // Tercer dígito
    int x4 = num % 10; // Cuarto dígito

    // Comparar los dígitos entre sí
    return (x1 == x2 || x1 == x3 || x1 == x4 ||
            x2 == x3 || x2 == x4 ||
            x3 == x4);
}

int main() {
    system("cls");
    int num;

    // Introducir numero
    cout << "Introduce un numero de cuatro dígitos: ";
    cin >> num;

    // Verificar si el numero tiene 4 digitod
    if (num >= 1000 && num <= 9999) {
        if (Digitosigual(num)) {
            cout << "El número " << num << " tiene al menos dos dígitos iguales." << endl;
        } else {
            cout << "El número " << num << " no tiene dígitos iguales." << endl;
        }
    } else {
        cout << "El número ingresado no tiene cuatro dígitos." << endl;
    }

    return 0;
}
