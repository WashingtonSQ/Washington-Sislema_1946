//https://github.com/WashingtonSQ/Washington-Sislema_1946
#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaVector(int v[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 20 + 1; 
    }
}

int ordenaBurbujav1(int v[], int n) {
    int aux, contador = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            contador++;
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    return contador;
}

int ordenaBurbujav2(int v[], int n) {
    int mejora = 1;
    int aux, contador = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - mejora; j++) {
            contador++;
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
        mejora++;
    }
    return contador;
}

int ordenaBurbujav3(int v[], int n) {
    int mejora = 1;
    bool cambio = true;
    int aux, contador = 0;
    for (int i = 0; i < n && cambio; i++) {
        cambio = false;
        for (int j = 0; j < n - mejora; j++) {
            contador++;
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                cambio = true;
            }
        }
        mejora++;
    }
    return contador;
}

void muestraVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void determinaOptima(int comparaciones1, int comparaciones2, int comparaciones3) {
    if (comparaciones1 < comparaciones2 && comparaciones1 < comparaciones3) {
        cout << "La version 1 es la mas óptima con " << comparaciones1 << " comparaciones." << endl;
    } 
    else if (comparaciones2 < comparaciones1 && comparaciones2 < comparaciones3) {
        cout << "La version 2 es la mas optima con " << comparaciones2 << " comparaciones." << endl;
    } 
    else if (comparaciones3 < comparaciones1 && comparaciones3 < comparaciones2) {
        cout << "La version 3 es la mas optima con " << comparaciones3 << " comparaciones." << endl;
    } 
    else {
        cout << "Hay un empate entre las versiones en el numero de comparaciones." << endl;
    }
}

int main() {
    int ne;
    cout << "Numero de elementos: ";
    cin >> ne;
    int vec[ne], vecOriginal[ne];
    llenaVector(vec, ne);
    for (int i = 0; i < ne; i++) {
        vecOriginal[i] = vec[i];
    }

    cout << "Vector original: " << endl;
    muestraVector(vec, ne);
    cout << endl;
    int vec1[ne];
    for (int i = 0; i < ne; i++) {
        vec1[i] = vecOriginal[i];  
    }
    int comparaciones1 = ordenaBurbujav1(vec1, ne);
    cout << "El numero de comparaciones burbujas version 1 es igual: " << comparaciones1 << endl;
    cout << "Vector ordenado por burbuja version 1: " << endl;
    muestraVector(vec1, ne);
    cout << endl;

    int vec2[ne];
    for (int i = 0; i < ne; i++) {
        vec2[i] = vecOriginal[i];  
    }
    int comparaciones2 = ordenaBurbujav2(vec2, ne);
    cout << "El numero de comparaciones burbujas version 2 es igual: " << comparaciones2 << endl;
    cout << "Vector ordenado por burbuja version 2: " << endl;
    muestraVector(vec2, ne);
    cout << endl;

    int vec3[ne];
    for (int i = 0; i < ne; i++) {
        vec3[i] = vecOriginal[i];  
    }
    int comparaciones3 = ordenaBurbujav3(vec3, ne);
    cout << "El numero de comparaciones burbujas version 3 es igual: " << comparaciones3 << endl;
    cout << "Vector ordenado por burbuja version 3: " << endl;
    muestraVector(vec3, ne);
    determinaOptima(comparaciones1, comparaciones2, comparaciones3);
}
