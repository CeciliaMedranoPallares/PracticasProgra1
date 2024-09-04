// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 15
// Problema planteado: Escribir un programa generar un número aleatorio no mayor a dos dígitos y realizar una función para muestre el número en literal.
#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using namespace std;

// Función para convertir un número a su forma literal en español
string numeroALiteral(int num) {
    const string unidades[] = {"", "Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve"};
    const string decenas[] = {"", "Diez", "Veinte", "Treinta", "Cuarenta", "Cincuenta", "Sesenta", "Setenta", "Ochenta", "Noventa"};
    const string especiales[] = {"Diez", "Once", "Doce", "Trece", "Catorce", "Quince", "Dieciséis", "Diecisiete", "Dieciocho", "Diecinueve"};

    // Manejar números entre 10 y 19
    if (num >= 10 && num < 20) {
        return especiales[num - 10];
    } else {
        int decena = num / 10;
        int unidad = num % 10;
        string resultado;

        // Agregar decenas al resultado
        if (decena > 0) {
            resultado = decenas[decena];
        }
        // Agregar unidades al resultado
        if (unidad > 0) {
            if (decena > 0) {
                resultado += " y ";
            }
            resultado += unidades[unidad];
        }

        // Manejar el caso de número cero
        if (resultado == "") {
            return "Cero";
        }
        return resultado;
    }
}

int main() {
    int num;
    srand(time(NULL));  // Inicializar la semilla para números aleatorios

    // Generar un número aleatorio entre 1 y 99
    num = rand() % 99 + 1;

    cout << "Número generado: " << num << endl;
    cout << "Número en literal: " << numeroALiteral(num) << endl;

    return 0;
}
