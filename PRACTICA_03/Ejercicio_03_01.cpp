// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 1
// Problema planteado:Obtener la suma de la serie: 4 + 6 + 9 + 13.....
#include <iostream>
using namespace std;

// Función para calcular la suma de la serie para 'n' términos
int Incremento(int n) {
    int suma = 0; // Variable para almacenar la suma total de la serie
    for (int m = 1; m <= n; m++) { // Itera desde 1 hasta n, donde n es el número de términos
        int num = 4; // Primer término de la serie
        int j = 0; // Variable para acumular el incremento
        // Calcula el incremento sumando números enteros desde 2 hasta m
        for (int i = 2; i <= m; i++) {
            j += i; // Suma los valores de i a la variable j
        }
        num += j; // Incrementa 'num' con el valor acumulado en 'j'
        suma += num; // Añade 'num' a la suma total
    }
    return suma; // Retorna la suma total de la serie
}

int main() {
    system ("cls");
    int n = 0; // Variable para almacenar el número de términos introducido por el usuario
    cout << "Introduzca la cantidad de dígitos: "; // Solicita al usuario el número de términos
    cin >> n; // Lee el número de términos desde la entrada estándar
    cout <<"La suma de la serie es:" <<Incremento(n); // Llama a la función Incremento y muestra el resultado
    return 0; // Finaliza el programa
}

