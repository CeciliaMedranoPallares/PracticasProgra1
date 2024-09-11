// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 03/09/2024
// Número de ejercicio: 6
// Problema planteado:Escribir un algoritmo que permita adivinar un número que se genere internamente al azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en base a aproximaciones para lo cual se dispone de 5 intentos.
#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using namespace std;

// Función para generar un número aleatorio entre 0 y 50
int GenerarNumero() {
    return rand() % 51; // Genera un número entre 0 y 50
}

// Función para procesar el intento del usuario
void ProcesarIntento(int adivinado, int objetivo, int &bajo, int &alto) {
    if (adivinado == objetivo) {
        cout << "¡Felicitaciones! Adivinaste el número" << endl;
        exit(0); // Termina el programa si el número es adivinado
    } else if (adivinado < objetivo) {
        bajo = adivinado + 1;
        cout << "El número está entre " << bajo << " y " << alto << endl;
    } else {
        alto = adivinado - 1;
        cout << "El número está entre " << bajo << " y " << alto << endl;
    }
}

// Función para manejar el juego
void Jugar() {
    int objetivo = GenerarNumero(); // Genera el número a adivinar
    int adivinado;
    int bajo = 0, alto = 50;
    const int maxIntentos = 5;

    cout << "Estoy pensando en un número entre 0 y 50" << endl;

    for (int i = 1; i <= maxIntentos; ++i) {
        cout << "Intento " << i << endl;
        cout << "? ";
        cin >> adivinado;

        ProcesarIntento(adivinado, objetivo, bajo, alto);
    }

    // Si no se adivina el número después de 5 intentos
    cout << "Lo siento, no adivinaste el número. El número era " << objetivo << endl;
}

int main() {
    system("cls");
    srand(time(0)); // Inicializa la semilla para números aleatorios

    Jugar(); // Llama a la función para jugar el juego

    return 0; // Finaliza el programa
}
