#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Función para ordenar el vector con el método de burbuja y contar los intercambios
void llenarvector(int v[], int n, int &intercambios) {
    int aux;
    intercambios = 0; // Inicializamos el contador de intercambios
    for (int i = 0; i < n - 1; i++) {  // Recorremos todo el vector n-1 veces
        for (int j = 0; j < n - i - 1; j++) {  // Últimos elementos ya están en su lugar
            if (v[j] > v[j + 1]) {  // Si el elemento actual es mayor que el siguiente
                aux = v[j];         // Intercambiamos
                v[j] = v[j + 1];
                v[j + 1] = aux;
                intercambios++;     // Incrementamos el contador de intercambios
            }
        }
    }
}

// Función para llenar el vector con números aleatorios o ingresar manualmente
void llenarAleatorio(int v[], int n) {
    srand(time(0));  // Inicializamos la semilla para la función rand()
    char opcion;
    cout << "Deseas ingresar los números manualmente? (s/n): ";
    cin >> opcion;
    if (opcion == 's' || opcion == 'S') {
        cout << "Introduce " << n << " numeros:" << endl;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
    } else {
        for (int i = 0; i < n; i++) {
            v[i] = rand() % 20 + 1;  // Asignamos un número aleatorio entre 1 y 20
        }
    }
}

// Función para mostrar el contenido del vector
void mostrarVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int ne, intercambios;
    cout << "Numero de elementos: ";
    cin >> ne;

    // Crear el vector dinámicamente
    int *vec = new int[ne];

    // Llenar el vector con valores (aleatorios o manuales)
    llenarAleatorio(vec, ne);

    cout << "Vector antes de ordenar: ";
    mostrarVector(vec, ne);

    // Ordenar el vector y contar los intercambios
    llenarvector(vec, ne, intercambios);

    cout << "Vector despues de ordenar: ";
    mostrarVector(vec, ne);

    cout << "NUmero de intercambios realizados: " << intercambios << endl;

    // Liberar la memoria dinámica
    delete[] vec;

    return 0;
}
