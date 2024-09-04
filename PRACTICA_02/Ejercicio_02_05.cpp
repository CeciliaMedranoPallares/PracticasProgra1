// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 3/09/2024
// Número de ejercicio: 5.
// Problema planteado: Leer un año y un mes (como número) y realizar una función para determinar cuántos días tiene ese mes considerando si el año es bisiesto.
#include <iostream> 
using namespace std;
// Función para ver si el año es bisiesto
int calcularBisiesto(int anio) {
    return anio%4;
}
// Función para determinar la cantidad de días en un mes
int diasMes(int mes, int anio) {
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:// Cambia los dias de febrero si es añ bisiesto
            if (calcularBisiesto(anio)==0) {
                return 29;
            } else {
                return 28;
            }
        default:
            cout<<"Introduzca un mes valido.";
            return -1;
    }}


int main() {
    system("cls");
    int  anio=0;
    int  mes=0;

    // Leer el valor del año
    cout << "Introduce el año: ";
    cin >> anio;
    // Leer el valor del mes 
    cout << "Introduce el mes: ";
    cin >> mes ;
    // Calcula el valor de los dias del mes correspondiente
    int dias = diasMes(mes, anio);
    cout << "El mes " << mes << " del año " << anio << " tiene " << dias << " días." << endl;
    return 0;
}
