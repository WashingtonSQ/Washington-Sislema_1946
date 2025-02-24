#include <iostream>
using namespace std;
int main(){
    string cadena = "informatica";
    cadena.clear(); // borramos la cadena de caracteres
    cout<<cadena; //no muestra nada
    cadena ="informatica"; // volvemos ainicializar con un valor
    cout<<"La cadena "<<cadena<<"tiene"<<cadena.length()<<"caracteres."<<endl; // longitud de la cadena
    cout<<"primer caracter: "<<cadena.front()<<endl; 
    cout<<"ultimo caracter: "<<cadena.back()<<endl;

    // añadir cadenas
    cadena.append(" moderna"); //es lo mismo que cadena +="moderna"
    cout<< cadena << endl ;

    // volvemos a inicializar  con un valor
    cadena="informatica";

    // buscar caracteres
    if(cadena.find("1")!=-1)
        cout<<"posicion del primer caracter i: "<<cadena.find("i")<<endl;
    cout<<"posicion del segundo caracter i: "<<cadena.find("i",1)<<endl;

    // Extraer subcadenas
    string subcad;
    subcad = cadena.substr(2,3);
    cout<< subcad << endl;
    subcad = cadena.substr(5);
    cout<<subcad<<endl;

    // reemplazar parte de la cadena
    cadena.replace(6,5,"acion");
    cout<<cadena<<endl;
    return 0;
}