#include <iostream>
using namespace std;
string cadena{"hola buenos dias"};
string objeto{"buenos dias"};
string porcion{"buenas noches"};
int size = porcion.size();
int pos = cadena.find("buenos dias");
if (pos != string::npos)
    cadena.reaplce(pos,size,porcion,substr(0,size));
cout<<cadena<<endl;
