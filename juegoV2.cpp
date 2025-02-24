#include <iostream>
#include <cstdlib>
#include <ctime>
#include "arays.h"  

using namespace std;
using namespace vectorn;  


void ordenarBurbuja(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void jugar() {
    int min_num, max_num;
    cout << "Ingresa el numero minimo del rango: ";
    cin >> min_num;
    cout << "Ingresa el numero maximo del rango: ";
    cin >> max_num;
    int cantidad;
    cout << "Cuantos numeros deseas generar? (maximo 10): ";
    cin >> cantidad;
    if (cantidad > 10) {
        cantidad = 10; 
    } 
    int numeros[10];  
    llenar(numeros, cantidad, min_num, max_num);
    ordenarBurbuja(numeros, cantidad);

    cout << "\nHe generado una lista de numeros, y ahora debes adivinar uno de ellos." << endl;
    int numero_a_adivinar = numeros[rand() % cantidad];

    cout << "Tienes 3 intentos para adivinar un numero de la lista generada." << endl;

    int intentos = 3;
    int adivinanza;
    bool acertado = false;

    while (intentos > 0 && !acertado) {
        cout << "\nTienes " << intentos << " intentos restantes. Ingresa un numero: ";
        cin >> adivinanza;
        if (adivinanza == numero_a_adivinar) {
            cout << "Felicidades! Adivinaste el numero correctamente." << endl;
            acertado = true;
        } else {
            if (adivinanza < numero_a_adivinar) {
                cout << "Pista: El numero es mayor." << endl;
            } else {
                cout << "Pista: El numero es menor." << endl;
            }
            intentos--;
        }
    }

    if (!acertado) {
        cout << "\nLo siento, has agotado tus intentos. El numero era: " << numero_a_adivinar << endl;
    }
}
int main() {
    srand(time(0));

    jugar();
}
