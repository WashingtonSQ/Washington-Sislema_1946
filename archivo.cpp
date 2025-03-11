// para crear documentos de texto se usa ofstream
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{  
    ofstream archivoSalida;
    archivoSalida.open("archivo.txt");
    if(archivoSalida.is_open()){

    archivoSalida << "Hola mundo" << endl;
    archivoSalida << "esto es una prueba" << endl;
    archivoSalida << "linea 3" << endl;
    archivoSalida.close();
    cout << "texto escrito en el archivo con exito" << endl;
    }
    else{
        cout << "no se pudo abrir el archivo" << endl;
    }
    return 0;
}