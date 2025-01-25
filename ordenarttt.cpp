#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenarvector(int v[], int n, int &count){
    int aux;
    count = 0;  // Inicializamos el contador de intercambios
    // Implementamos el algoritmo de la burbuja
    for (int i = 0; i < n-1; i++){  // Recorremos todo el vector n-1 veces
        for (int j = 0; j < n-i-1; j++){  // Últimos elementos ya están en su lugar
            if (v[j] > v[j+1]){  // Si el elemento actual es mayor que el siguiente
                aux = v[j];  // Intercambiamos
                v[j] = v[j+1];
                v[j+1] = aux;
                count++;  // Incrementamos el contador de intercambios
            }
        }
    }
}

void llenarAleatorio(int v[], int n){
    srand(time(0));  // Inicializamos la semilla para la función rand()
    for (int i = 0; i < n; i++) {
       // v[i] = rand() % 20 + 1;  // Asignamos un número aleatorio entre 1 y 20
       cin>>v[i];
    }
}

void mostrarVector(int v[], int n){
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    int ne, intercambios;
    cout << "Numero de elementos: ";
    cin >> ne;
    int vec[ne];

    // Llenar el vector con valores aleatorios entre 1 y 20
    llenarAleatorio(vec, ne);

    cout << "Vector antes de ordenar: ";
    mostrarVector(vec, ne);

    // Llamamos a la función de ordenar y pasamos el contador de intercambios
    llenarvector(vec, ne, intercambios);

    cout << "Vector después de ordenar: ";
    mostrarVector(vec, ne);

    cout << "Numero de intercambios realizados: " << intercambios << endl;

    return 0;
}
