// app para agregar texto 
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{  
    ofstream archivoSalida;
    archivoSalida.open("archivo.doc",ios::app);
    if(archivoSalida.is_open()){

    archivoSalida << "linea agregada al finel" << endl;
    archivoSalida << "otra linea mas" << endl;
    archivoSalida.close();
    cout << "texto escrito en el archivo con exito" << endl;
    }
    else{
        cout << "no se pudo abrir el archivo" << endl;
    }
    return 0;
}