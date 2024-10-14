// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 16
// Problema planteado: Validar si los paréntesis en una expresión matemática están balanceados.

#include <iostream>
#include <string>
using namespace std;

// Función para verificar si la expresión tiene los paréntesis balanceados
bool sonParentesisBalanceados(const string& expresion) {
    int contadorParentesis = 0; // Contador para los paréntesis ()
    int contadorLlaves = 0;      // Contador para las llaves {}
    int contadorCorchetes = 0;    // Contador para los corchetes []

    for (char c : expresion) { // Recorrer cada carácter de la expresión
        // Aumentar el contador correspondiente si se encuentra un paréntesis abierto
        if (c == '(') {
            contadorParentesis++;
        } else if (c == ')') {
            contadorParentesis--;
        } else if (c == '{') {
            contadorLlaves++;
        } else if (c == '}') {
            contadorLlaves--;
        } else if (c == '[') {
            contadorCorchetes++;
        } else if (c == ']') {
            contadorCorchetes--;
        }

        // Si en algún momento el contador es negativo, hay un desbalance
        if (contadorParentesis < 0 || contadorLlaves < 0 || contadorCorchetes < 0) {
            return false;
        }
    }

    // Para que estén balanceados, todos los contadores deben ser cero al final
    return (contadorParentesis == 0 && contadorLlaves == 0 && contadorCorchetes == 0);
}

int main() {
    string expresion; // Variable para almacenar la expresión matemática

    cout << "Ingresa una expresión matemática: ";
    getline(cin, expresion); // Obtener la expresión ingresada

    // Validar si la expresión tiene los paréntesis balanceados
    if (sonParentesisBalanceados(expresion)) {
        cout << "CORRECTO" << endl; // Mensaje si los paréntesis están balanceados
    } else {
        cout << "NO BALANCEADOS" << endl; // Mensaje si no están balanceados
    }

    return 0;
}
