// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 8
// Problema planteado:Se desea conocer cuantos pañales por día se consumen.
#include <iostream>
#include <cstdlib>  // Para funciones rand() y srand()
#include <ctime>    // Para la función time()

using namespace std;

// Función para calcular el total de pañales utilizados por día
int CalcularTotalPañales(int niños1Año, int niños2Años, int niños3Años) {
    // Cantidad de pañales utilizados por cada grupo de edad
    const int pañalesPor1Año = 6;
    const int pañalesPor2Años = 3;
    const int pañalesPor3Años = 2;
    
    // Cálculo total de pañales necesarios
    return (niños1Año * pañalesPor1Año) + (niños2Años * pañalesPor2Años) + (niños3Años * pañalesPor3Años);
}

// Función para generar aleatoriamente el número de niños en cada grupo de edad
void GenerarDistribucionNinos(int totalNinos, int &ninos1Ano, int &ninos2Anos, int &ninos3Anos) {
    // Inicializar el número total de niños procesado
    int ninosContados = 0;
    
    // Asignar aleatoriamente el número de niños de 1 año
    ninos1Ano = rand() % (totalNinos + 1);
    ninosContados += ninos1Ano;

    // Asignar aleatoriamente el número de niños de 2 años
    ninos2Anos = rand() % (totalNinos - ninosContados + 1);
    ninosContados += ninos2Anos;

    // El resto de los niños serán de 3 años
    ninos3Anos = totalNinos - ninosContados;
}

int main() {
    system("cls");
    srand(time(NULL)); // Inicializar la semilla para la generación de números aleatorios

    int totalNinos;
    cout << "Introduzca el numero total de ninos: ";
    cin >> totalNinos;

    int ninos1Ano, ninos2Anos, ninos3Anos;
    
    // Generar la distribución de niños en cada grupo de edad
    GenerarDistribucionNinos(totalNinos, ninos1Ano, ninos2Anos, ninos3Anos);
    
    // Calcular el total de pañales que se utilizan diariamente
    int totalPañales = CalcularTotalPañales(ninos1Ano, ninos2Anos, ninos3Anos);
    
    // Mostrar la cantidad de niños en cada grupo de edad y el total de pañales
    cout << "Numero de ninos de 1 ano: " << ninos1Ano << endl;
    cout << "Numero de ninos de 2 anos: " << ninos2Anos << endl;
    cout << "Numero de ninos de 3 anos: " << ninos3Anos << endl;
    cout << "Total de pañales consumidos por dia: " << totalPañales << endl;
    
    return 0;
}
