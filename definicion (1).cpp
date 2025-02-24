#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string nombres="Pedro";
    string apellido("Perez");
    string inicial(1,'p');
    string cadena="juan jose arturo";
    string nombre2(cadena,5,4);
    cout<<"La longitud de la cadena es: "<<nombre2.length()<<endl;
    inicial+="edro";
    cout<<inicial[0]<<endl;
    cout<<inicial;
    inicial = "cad";
    cout << inicial << endl;
    cout << nombre2 <<endl;

    return 0;
}