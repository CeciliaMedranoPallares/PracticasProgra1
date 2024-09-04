// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 3/09/2024
// Número de ejercicio: 4.
// Problema planteado:  Leer tres números enteros y realizar una función para determinar si pueden formar un triángulo rectángulo (aplicar el teorema de Pitágoras).
#include <iostream> 
#include <cmath> // Necesario para sqrt() y pow()
using namespace std;
// Función para calcular la hipotenusa
float calcularHipotenusa(float x, float y) {
    return sqrt(pow(x,2) + pow(y,2));
}

int main() {
    system("cls");
    float x=0;
    float y=0;
    float z=0;

    // Leer el valor de los catetos
    cout << "Introduce el valor del primer cateto: ";
    cin >> x;
    cout << "Introduce el valor del primer cateto: ";
    cin >> y ;
    // Leer el valor de la hipotenusa
    cout << "Introduce el valor de la hipotenusa: ";
    cin >> z;
     // Comprobando mediante el Teorema de Pitagoras
    if(z==calcularHipotenusa(x,y)){
        cout<<"El triangulo formado por los anteriores valores  es un triangulo rectangulo.";
    }
    else{
        cout<<"El triangulo formado por los anteriores valores no  es rectangulo.";
    }

    return 0;
}
