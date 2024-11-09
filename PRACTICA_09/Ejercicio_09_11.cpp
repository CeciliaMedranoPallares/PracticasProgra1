// Autor:Cecilia Belen Medrano Pallares.

// Fecha creación: 9/11/2024

// Número de ejercicio: 11

// Problema planteado:Realizar un algoritmo recursivo para el siguiente problema: un granjero ha comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de conejos produce una nueva pareja cada mes y la nueva pareja..
#include <iostream>
using namespace std;

// Función recursiva que calcula el número de pares de conejos
// al cabo de 'mes' meses
int conejos(int mes) {
    // Caso base: si es el primer o segundo mes, solo hay una pareja de conejos
    if (mes <= 2)
        return 1;
    // Llamada recursiva: cada mes el número de parejas es la suma
    // de las parejas del mes anterior y el mes antepasado
    return conejos(mes - 1) + conejos(mes - 2);
}

int main() {
    int meses = 12; // El granjero desea saber el número de parejas al cabo de 12 meses (1 año)
    // Llamada a la función y salida del resultado
    cout << "Número de pares de conejos al cabo de " << meses << " meses: " << conejos(meses) << endl;
    return 0;
}
