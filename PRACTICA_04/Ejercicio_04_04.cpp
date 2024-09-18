// Materia: Programación I, Paralelo 1
// Autor:Cecilia Belen Medrano Pallares.
// Fecha creación: 17/09/2024
// Número de ejercicio: 4.
// Problema planteado:Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector
#include <iostream>
#include <vector>

using namespace std;

// Función para obtener la dimensión de los vectores
int Dimensiones() {
    int N = 0;
    cout << "Introduzca las dimensiones de los vectores: ";
    cin >> N;
    return N;  // Retorna la dimensión ingresada
}

// Función para leer el primer vector
vector<int> Vector1(int N) {
    vector<int> Vector1(N);  // Crea un vector de tamaño N
    cout << "Ingrese las " << N << " coordenadas del primer vector: ";
    for (int i = 0; i < N; i++) {
        cin >> Vector1[i];  // Lee cada elemento del vector
    }
    return Vector1;  // Retorna el vector completo
}

// Función para leer el segundo vector (idéntica a Vector1)
vector<int> Vector2(int N) {
    vector<int> Vector2(N);
    cout << "Ingrese las " << N << " coordenadas del segundo vector: ";
    for (int i = 0; i < N; i++) {
        cin >> Vector2[i];
    }
    return Vector2;
}

// Función para multiplicar los vectores elemento por elemento
vector<int> Multiplicacion(const vector<int>& Vec1, const vector<int>& Vec2) {
    int N = Vec1.size();  // Obtiene el tamaño de los vectores
    vector<int> Multiplicacion(N);  // Crea un vector para almacenar el resultado
    for (int i = 0; i < N; i++) {
        Multiplicacion[i] = Vec1[i] * Vec2[i];  // Multiplica los elementos correspondientes
    }
    return Multiplicacion;  // Retorna el vector resultante
}

// Función para mostrar el resultado de la multiplicación
void MostrarResultado(const vector<int>& resultado) {
    cout << "El resultado de la multiplicación es: ";
    for (int valor : resultado) {
        cout << valor << " ";  // Imprime cada elemento del vector resultado
    }
    cout << endl;
}

int main() {
    // Obtiene la dimensión de los vectores
    int N = Dimensiones();

    // Lee los dos vectores
    vector<int> Vec1 = Vector1(N);
    vector<int> Vec2 = Vector2(N);

    // Realiza la multiplicación
    vector<int> resultado = Multiplicacion(Vec1, Vec2);

    // Muestra el resultado
    MostrarResultado(resultado);

    return 0;
}
