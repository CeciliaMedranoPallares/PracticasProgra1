// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 17/09/2024
// Número de ejercicio: 2.
// Problema planteado:Escriba un programa para introducir los siguientes valores en un arreglo nombrado.
#include <iostream> 
#include <vector>    
using namespace std;

int main() {
    // Declaración e inicialización del vector con los valores de voltios
    vector<double> voltios = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    // Bucle for para recorrer y mostrar los elementos del vector
    for(int i = 0; i < voltios.size(); i++) // voltios.size() devuelve el número de elementos en el vector
    {
        // Condición para imprimir un salto de línea después del tercer y sexto elemento
        if(i == 2 || i == 5 )
            cout << voltios[i] << " " << endl << " ";
        else {
            cout << voltios[i] << " "; // Imprime el elemento actual seguido de un espacio
        }
    }
    return 0;
}
