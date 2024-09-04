// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 12
// Problema planteado: Escriba un programa para leer dos valores enteros distintos entre sí, de tal forma que,si el primer número es mayor al segundo, realizar una función para genere una serie descendente, caso contrario, realizar otra función para muestre una serie ascendente.
#include <iostream>
using namespace std;

// Función para cuando num1 es mayor a num2
void Descendente(int num1, int num2) {
    for (int i = num1; i >= num2; i--) {
        cout << i << " ";
    }
}

// Función para cuando num1 es menor a num2
void Ascendente(int num1, int num2) {
    for (int i = num1; i <= num2; i++) {
        cout << i << " ";
    }
}

int main() {
    system("cls");
    int num1=0;
    int num2=0;
    // Pedir los dos numeros por teclado
    cout << "Introduce el primer numero ";
    cin >> num1;
    cout << "Introduce el segundo numero ";
    cin >> num2;
    // Verificar si son iguales
    if(num1==num2){
        cout<<"Introduzca numeros distintos.";
    }
    else if(num1>num2){
        Descendente(num1,num2);
    }
    else{
        Ascendente(num1,num2);
    }
    return 0;
}
