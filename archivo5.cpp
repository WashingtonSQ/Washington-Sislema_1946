#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    // crear un objeto de tipo fstream
    fstream archivo;
    string frase, nomarchivo;
    cout << "ingrese nombre archivo con extension: ";
    cin >>nomarchivo;

    // pedir al usuario una frase
    cout << "Escribe una frase para agregar el archivo: ";
    cin.ignore();
    getline(cin, frase);
    //abrir el archivo en modo escritura (append)
    archivo.open(nomarchivo.c_str(), ios::out | ios::app);
    if (archivo.is_open()){
        archivo << frase << endl;
    archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para escribir." << endl;
        return 1;
    }
    //abrir el archivo en modo lectura
    archivo.open("ejemplo.txt", ios::in);
    if (archivo.is_open()){
        string linea;
        cout << "Contenido del archivo:" <<endl;
        while (getline(archivo, linea)){
            cout << linea << endl;
        }
        archivo.close();
    } else{
        cout << "No se pudo abrir el archivo para leer." <<endl;
    }
    return 0;
}