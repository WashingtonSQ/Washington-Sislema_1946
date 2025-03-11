//para escribir y leer archivos de texto se usa fstream
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream archivo;
    string frase;
    cout << "Escriba una frase para agregar al archivo: ";
    getline(cin, frase);
    archivo.open("ejemplo.txt", ios::out | ios::app);
    if(archivo.is_open()){
        archivo << frase << endl;
        archivo.close();
    } else{
        cout << "No se pudo abrir el archivo para escribir" <<endl;
        return 1;
    }
    archivo.open("ejemplo.txt", ios::in);
    if(archivo.is_open()){
        string linea;
        cout << "Contenido del archivo:" << endl;
        while(getline(archivo, linea)){
            cout << linea << endl;
        }
        archivo.close();
    }else{
        cout << "No se pudo abrir el archivo para leer" << endl;
    }
    return 0;
}