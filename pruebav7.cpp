#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

char obtenerEleccionUsuario() {
    char eleccion;
    cout << "Ingresa tu eleccion (p = Piedra, a = Papel, t = Tijera): ";
    cin >> eleccion;
    while (eleccion != 'p' && eleccion != 'a' && eleccion != 't') {
        cout << "Eleccion invalida. Por favor, ingresa p para Piedra, a para Papel o t para Tijera: ";
        cin >> eleccion;
    }
    return eleccion;
}

char obtenerEleccionMaquina() {
    int eleccion = rand() % 3;  
    if (eleccion == 0) return 'p';  
    if (eleccion == 1) return 'a'; 
    return 't'; 
}

int determinarGanador(char usuario, char maquina) {
    if (usuario == maquina) {
        return 0;
    }
    if ((usuario == 'p' && maquina == 't') || (usuario == 'a' && maquina == 'p') || (usuario == 't' && maquina == 'a')) {
        return 1;
    }
    return 2; 
}

void determinarGanadorJuego(int puntosUsuario, int puntosMaquina) {
    if (puntosUsuario > puntosMaquina) {
        cout << "Felicidades! Has ganado el juego." << endl;
    } else if (puntosUsuario < puntosMaquina) {
        cout << "La maquina ha ganado el juego jajaj LOSER." << endl;
    } else {
        cout << "Es un empate!" << endl;
    }
}

int main() {
    srand(time(0));
    
    string nombreUsuario;
    cout << "Bienvenido jugador ingresa tu nombre: ";
    cin >> nombreUsuario;

    int puntosUsuario = 0, puntosMaquina = 0;
    int nivel;
    cout <<"Hola "<<nombreUsuario<<" bienvenido al juego de piedra, papel o tijera"<<endl;
    cout <<"QUE EMPIEZE EL JUEGO!  =) "<<endl;
    cout <<"Elige el nivel de dificultad:" << endl;
    cout <<"1. Principiante (Empiezan 0-0)" << endl;
    cout <<"2. Intermedio (Empieza ganando la maquina con 1 punto)" << endl;
    cout <<"3. Avanzado (Empieza ganando la maquina con 2 puntos)" << endl;
    cout <<"Que nivel deseas elegir, " << nombreUsuario << "? :) \n";
    cin >> nivel;

    if (nivel == 1) {
        puntosMaquina = 0;
    } else if (nivel == 2) {
        puntosMaquina = 1;
    } else if (nivel == 3) {
        puntosMaquina = 2;
    } else {
        cout << "Nivel inexistente. Empiezas en el nivel Principiante" << endl;
        puntosMaquina = 0;
    }

    for (int ronda = 1; ronda <= 5; ronda++) {
        cout << "\nRonda " << ronda << ":\n";

        char eleccionUsuario = obtenerEleccionUsuario();
        char eleccionMaquina = obtenerEleccionMaquina();
        cout << "La maquina elige: " << eleccionMaquina << endl;

        int resultado = determinarGanador(eleccionUsuario, eleccionMaquina);
        if (resultado == 1) {
            puntosUsuario++;
            cout << "¡Ganaste la ronda, " << nombreUsuario << "!" << endl;
        } else if (resultado == 2) {
            puntosMaquina++;
            cout << "La maquina gana la ronda." << endl;
        } else {
            cout << "Empate en la ronda." << endl;
        }
        cout << "Puntos " << nombreUsuario << ": " << puntosUsuario << " | Puntos maquina: " << puntosMaquina << endl;
    }

    determinarGanadorJuego(puntosUsuario, puntosMaquina);
}
