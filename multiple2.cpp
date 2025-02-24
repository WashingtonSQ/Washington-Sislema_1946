#include <iostream>
using namespace std;
main()
{
    char caracter;
    int numero1,numero2,resultado;
    cout << "Ingrese la opereacion que desea ejecutar:"<<endl;
    cout<< "+ = suma \n- = resta \n* = multiplicacion \n/ = division"<<endl;
    cin>>caracter;
    cout<<"Insrese el primer numero"<<endl;
    cin>>numero1;
    cout<<"Insrese el segundo numero"<<endl;
    cin>>numero2;
    switch (caracter)
    {
        case '+':
            resultado=numero1+numero2;
            cout<<"el resultado de la suma es:"<<resultado;
            break;
        case '-':
             resultado=numero1-numero2;
            cout<<"el resultado de la resta es:"<<resultado;
            break;
        case '*':
            resultado=numero1*numero2;
            cout<<"el resultado de la multiplicaion es:"<<resultado;
             break;
        case '/':
        if(numero2==0){
            cout<<"El numero no es valiodo ya que no hay division para 0"<<endl;
            }else{
            resultado=numero1/numero2;
            cout<<"el resultado de la suma es:"<<resultado;
            }
            break;
            
    default:
            
        cout<<"Opcion no valida"<<endl;
        
    }
}