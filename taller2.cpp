#include<iostream>
using namespace std;
main(){
    string cadena1 = {"Informatica"};
    const char *auxiliar;
    string cadena2(cadena1); // cadena2 = cadena1
    string cadena3 (10,'*');
    string cadena4;
    cout << cadena3 << endl;
    cadena1.push_back('x');
    cout << cadena1<<endl;
    cadena1.at(0)='A';
    cout << cadena1<<endl;
    cadena1.front()='i';
    cadena1.back()='A';
    cout << cadena1 << endl;
    auxiliar = cadena1.c_str();
    cout << "auxiliar array char "<<auxiliar<<endl;
    (cadena4.empty())?cout<<"cadena vacia\n": cout<<"cadena no vacia\n";
    cout << "tamanio maximo: " << cadena1.max_size();
    cout<<"cad1= "<<cadena1<<"cad2= "<<cadena2<<endl;
    cadena1 ="sol";
    cadena2 ="Holasssssss";
    int comparacion = cadena1.compare(cadena2);
    cout<<"comparacion: "<<comparacion<<endl;
    int encontrado = cadena1.find("sol");
    cout<<"encontrado" << encontrado;
    (cadena1.find("ol")==string::npos)?cout<<"no encontrado":cout<<"encontrado";
    
}