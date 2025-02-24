#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "arays.h"  // Incluimos tu librería

using namespace std;
using namespace vectorn;  // Para acceder a las funciones de tu librería

void jugar() {
    // El usuario escoge un rango de números
    int min_num, max_num;
    cout << "Ingresa el numero minimo del rango: ";
    cin >> min_num;
    cout << "Ingresa el numero maximo del rango: ";
    cin >> max_num;
    
    // El usuario elige la cantidad de números a generar
    int cantidad;
    cout << "Cuantos numeros deseas generar? (máximo 10): ";
    cin >> cantidad;
    if (cantidad > 10) {
        cantidad = 10; // Limitar a 10 números máximo
    }
    
    // Crear un arreglo para almacenar los números generados
    int numeros[10];  // Máximo 10 números, por la restricción

    // Llamamos a la función de tu librería para llenar el arreglo
    llenar(numeros, cantidad, min_num, max_num);

    // Ordenar los números
    sort(numeros, numeros + cantidad);

    cout << "\nHe generado una lista de numeros, y ahora debes adivinar uno de ellos." << endl;
    
    // Seleccionamos un número aleatorio de la lista generada para que el jugador lo adivine
    int numero_a_adivinar = numeros[rand() % cantidad];

    cout << "Tienes 3 intentos para adivinar un numero de la lista generada." << endl;

    // El jugador tiene 3 intentos
    int intentos = 3;
    int adivinanza;
    bool acertado = false;

    while (intentos > 0 && !acertado) {
        cout << "\nTienes " << intentos << " intentos restantes. Ingresa un numero: ";
        cin >> adivinanza;

        // Verificamos si la adivinanza es correcta
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

    // Si se acabaron los intentos y no se adivinó
    if (!acertado) {
        cout << "\nLo siento, has agotado tus intentos. El numero era: " << numero_a_adivinar << endl;
    }
}

int main() {
    // Inicializar la semilla para números aleatorios
    srand(time(0));

    jugar();
    return 0;
}
