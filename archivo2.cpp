// para leer el archivo se usa ifstream en lugar de ofstream
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{  
    ifstream archivoEntrada;
    archivoEntrada.open("archivo.txt");
    if(archivoEntrada.is_open()){
        string linea;
        while(getline(archivoEntrada, linea)){
            cout << "leido:" << endl;
        }

    archivoEntrada.close();
    }else{
        cout << "no se pudo abrir el archivo" << endl;
    }
    return 0;
}