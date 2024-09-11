// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 5
// Problema planteado:Simular el lanzamiento de una moneda n veces y determinar el porcentaje de caras y el porcentaje de sellos.

#include <iostream>
#include <ctime>    // Para time()
#include <cstdlib>  // Para rand() y srand()

using namespace std;

// Función para calcular la frecuencia de aparición de caras y cruces
void Frecuencia(int n, double &probCara, double &probCruz) {
    // Inicialización de los contadores
    int conteoCaras = 0;
    int conteoCruz = 0;

    for (int i = 0; i < n; i++) {
        int aleatorio = 1 + rand() % 2; // Genera un número aleatorio entre 1 y 2

        // Incrementa el contador correspondiente según el resultado del lanzamiento
        if (aleatorio == 1) {
            conteoCaras++;
        } else {
            conteoCruz++;
        }
    }

    // Calcula el porcentaje de caras y cruces
    probCara = (double(conteoCaras) / n) * 100;
    probCruz = (double(conteoCruz) / n) * 100;
}

int main() {
    system ("cls");
    srand(time(NULL)); // Inicializa la semilla para números aleatorios

    int n = 0; // Variable para almacenar el número de lanzamientos
    cout << "Introduzca la cantidad de lanzamientos: ";
    cin >> n; // Lee el número de lanzamientos desde la entrada estándar

    if (n <= 0) {
        cerr << "El número de lanzamientos debe ser mayor que 0." << endl;
        return 1;
    }

    double probCara = 0;
    double probCruz = 0;

    // Calcula las frecuencias de aparición de caras y cruces
    Frecuencia(n, probCara, probCruz);

    // Muestra los resultados
    cout << "El porcentaje de caras es: " << probCara << "%" << endl;
    cout << "El porcentaje de cruces es: " << probCruz << "%" << endl;

    return 0; // Finaliza el programa
}
