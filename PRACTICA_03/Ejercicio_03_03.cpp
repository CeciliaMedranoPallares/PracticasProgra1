// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 3
// Problema planteado: Convertir un número en base n a base 10, empleando el Teorema Fundamental de la Numeración

#include <iostream>
#include <cmath> // Incluir cmath para usar pow()
using namespace std;

int Conversion(int n, int base) {
    int digito;
    int suma = 0;
    int i = 0; // Posición del dígito en la base

    // Procesar el número dígito por dígito
    while (n > 0) {
        digito = n % 10; // Obtener el último dígito
        suma += digito * pow(base, i); // Convertir a base 10
        n /= 10; // Eliminar el último dígito
        i++; // Pasar a la siguiente posición
    }

    return suma;
}

int main() {
    system ("cls");
    int n = 0;
    int base = 0;
    cout << "Ingrese el número (en base n): ";
    cin >> n;
    cout << "Ingrese la base del número: ";
    cin >> base;


    cout << "El número en base "<<base <<" es:" << Conversion(n, base) << endl;

    return 0;
}

