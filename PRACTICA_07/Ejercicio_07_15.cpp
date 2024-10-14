// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 13/10/2024
// Número de ejercicio: 15
// Problema planteado: Validar el formato de una dirección de correo electrónico.

#include <iostream>
#include <string>
using namespace std;

// Función para contar el número de veces que aparece el carácter '@'
int contarArrobas(const string& correo) {
    int count = 0;
    int i = 0;
    // Usar un bucle while para recorrer cada carácter de la cadena
    while (i < correo.length()) {
        if (correo[i] == '@') {
            count++; // Aumentar el contador si se encuentra un '@'
        }
        i++; // Incrementar el índice para seguir al siguiente carácter
    }
    return count; // Retornar el número de arrobas encontradas
}

// Función para verificar si hay al menos un punto después de la arroba
bool hayPuntoDespuesArroba(const string& correo) {
    int i = 0;
    bool puntoEncontrado = false; // Variable para indicar si se encontró un punto

    while (i < correo.length()) {
        if (correo[i] == '@') { // Cuando encontramos '@', comenzamos a buscar el punto
            int j = i + 1;
            // Usar un bucle while para buscar un punto
            while (j < correo.length()) {
                if (correo[j] == '.') {
                    puntoEncontrado = true; // Se encontró un punto después de la arroba
                }
                j++; // Incrementar el índice para seguir buscando
            }
        }
        i++; // Continuar buscando en el resto de la cadena
    }
    return puntoEncontrado; // Retornar si se encontró un punto
}

int main() {
    string correo; // Variable para almacenar el correo electrónico ingresado

    cout << "Ingresa una dirección de correo electrónico: ";
    getline(cin, correo); // Obtener el correo de entrada

    // Llamar a las funciones para validar el correo
    int arrobaCount = contarArrobas(correo); // Contar las arrobas
    bool puntoValido = hayPuntoDespuesArroba(correo); // Verificar el punto

    // Validar que haya exactamente un '@' y al menos un '.' después de '@'
    if (arrobaCount == 1 && puntoValido) {
        cout << "Correo electrónico válido" << endl; // Mensaje si es válido
    } else {
        cout << "Correo electrónico inválido" << endl; // Mensaje si no es válido
    }

    return 0;
}
