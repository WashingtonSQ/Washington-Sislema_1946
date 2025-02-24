#include <iostream>  // Incluye la librería para trabajar con entrada y salida estándar
using namespace std;  // Usamos el espacio de nombres estándar para evitar escribir 'std::' repetidamente

// Definición de la función reemplazarPalabra, que toma una cadena por referencia
// y las palabras antigua y nueva como constantes
void reemplazarPalabra(string& cadena, const string& palabraAntigua, const string& palabraNueva) {
    // Busca la primera aparición de palabraAntigua en la cadena
    size_t pos = cadena.find(palabraAntigua);  
    
    // Si se encontró la palabra (find devuelve la posición o string::npos si no la encuentra)
    if (pos != string::npos) { 
        // Reemplaza la palabraAntigua con la palabraNueva en la posición encontrada
        cadena.replace(pos, palabraAntigua.size(), palabraNueva);
    } else {
        // Si no se encontró la palabra, muestra un mensaje
        cout << "No existe esa palabra en la cadena." << endl;
    }
}

int main() {
    string cadena;          // Declara una variable para almacenar la cadena de texto (frase)
    string palabraAntigua;  // Declara una variable para la palabra que se quiere reemplazar
    string palabraNueva;    // Declara una variable para la nueva palabra que reemplazará la antigua
    
    // Pide al usuario que ingrese una frase
    cout << "Introduce una frase: ";
    getline(cin, cadena);  // Lee toda la línea de texto, incluyendo espacios, y la guarda en 'cadena'
    
    // Pide al usuario que ingrese la palabra que desea reemplazar
    cout << "Introduce la palabra que deseas reemplazar: ";
    cin >> palabraAntigua;  // Lee la palabra que el usuario desea reemplazar
    
    // Pide al usuario que ingrese la nueva palabra
    cout << "Introduce la palabra nueva: ";
    cin >> palabraNueva;  // Lee la nueva palabra con la que reemplazará la antigua
    
    // Llama a la función reemplazarPalabra con los parámetros correspondientes
    reemplazarPalabra(cadena, palabraAntigua, palabraNueva);
    
    // Muestra la nueva frase con la palabra reemplazada
    cout << "La nueva frase es: " << cadena << endl;
}
