#include <iostream>
using namespace std;
void reemplazarPalabra(string& cadena, const string& palabraAntigua, const string& palabraNueva) {
    size_t pos = cadena.find(palabraAntigua);  
    if (pos != string::npos) { 
        cadena.replace(pos, palabraAntigua.size(), palabraNueva);
    } else {
        cout << "No existe esa palabra en la cadena." << endl;
    }
}
 main() {
    string cadena; 
    string palabraAntigua;  
    string palabraNueva; 
    cout << "Introduce una frase: ";
    getline(cin, cadena);
    cout << "Introduce la palabra que deseas reemplazar: ";
    cin >> palabraAntigua;
    cout << "Introduce la palabra nueva: ";
    cin >> palabraNueva;
    reemplazarPalabra(cadena, palabraAntigua, palabraNueva);
    cout << "La nueva frase es: " << cadena << endl;
}
