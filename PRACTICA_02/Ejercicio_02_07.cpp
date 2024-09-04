// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 7
// Problema planteado: Realizar una función para imprimir la tabla de multiplicar de un número dado.
#include <iostream>
using namespace std;

// Función para que se imprima la tabla de multiplicar
void Tabla(int num) {
    int resul=0;
    for(int i=0;i<=10;i++){
        resul=i*num;
        cout <<num <<" x "<<i<<" = "<<resul<<endl;
        }
}

int main() {
    system("cls");
    int num=0;
    // Pedir el numero por teclado
    cout << "Introduce el numero del cual se desea su tabla de multiplicar: ";
    cin >> num;
    // LLama a la funcion tabla
    Tabla(num);
    return 0;
}
