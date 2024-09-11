// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 2
// Problema planteado:Simular el lanzamiento de un dado n veces y determinar la frecuencia de repetición de las caras pares.
#include <iostream>
#include <ctime>    // Para time()
#include <cstdlib>  // Para rand() y srand()

using namespace std;

// Función para calcular la frecuencia de aparición de las caras pares
void Frecuencia(int n, int& conteo2, int& conteo4, int& conteo6) {
    // Inicialización de los contadores
    conteo2 = 0;
    conteo4 = 0;
    conteo6 = 0;

    for (int i = 0; i < n; i++) {
        int aleatorio = 1 + rand() % 6; // Genera un número aleatorio entre 1 y 6

        // Incrementa el contador correspondiente según el resultado del lanzamiento
        switch (aleatorio) {
            case 2:
                conteo2++;
                break;
            case 4:
                conteo4++;
                break;
            case 6:
                conteo6++;
                break;
            default:
                // No hacemos nada para 1, 3 y 5 ya que no son pares
                break;
        }
    }
}

int main() {
    srand(time(NULL)); // Inicializa la semilla para números aleatorios
    system ("cls");
    int n = 0; // Variable para almacenar el número de lanzamientos
    cout << "Introduzca la cantidad de lanzamientos: ";
    cin >> n; // Lee el número de lanzamientos desde la entrada estándar
    // Variables para almacenar la frecuencia de las caras pares
    int conteo2, conteo4, conteo6;
    Frecuencia(n, conteo2, conteo4, conteo6);

    // Muestra los resultados
    cout << "Frecuencia de la cara 2: " << conteo2 << endl;
    cout << "Frecuencia de la cara 4: " << conteo4 << endl;
    cout << "Frecuencia de la cara 6: " << conteo6 << endl;

    return 0; // Finaliza el programa
}
