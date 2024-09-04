// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 8
// Problema planteado: Realizar una función para imprimir los primeros N números de la secuencia de Fibonacci
#include <iostream>
using namespace std;

// Funcion para contar y calcular los N números Fibonacci
void Fibonacci (int N) {
    int m=0;
    int n=1;
    int p=0;
    for(int i=1;i<=N;i++){
        cout<<m<<"";
        p=m+n;
        m=n;
        n=p;
        }
}


int main() {
    system("cls");
    int N=0;
    // Pedir la cantidad de numeros Fibonacci
    cout << "Introduce la cantidad numeros que desea imprimir de la secuencia Fibonacci: ";
    cin >> N;
    // LLama a la funcion Fibonacci
    Fibonacci(N);
    return 0;
}
