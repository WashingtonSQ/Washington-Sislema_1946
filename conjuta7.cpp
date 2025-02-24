#include <iostream>
#include <cctype> 
enum TipoCadena {
    NUMERICA,
    ALFANUMERICA,
    ALFABETICA,
    DESCONOCIDA
};

TipoCadena identificarTipoCadena(const char* str) {
    bool esNumerica = true;
    bool esAlfabetica = true;
    bool esAlfanumerica = true;

    
    for (int i = 0; str[i] != '\0'; ++i) {
        
        if (!isdigit(str[i])) {
            esNumerica = false;
        }
        
        if (!isalpha(str[i])) {
            esAlfabetica = false;
        }
        
        if (!isalnum(str[i])) {
            esAlfanumerica = false;
        }
    }

   
    if (esNumerica) {
        return NUMERICA;
    } else if (esAlfabetica) {
        return ALFABETICA;
    } else if (esAlfanumerica) {
        return ALFANUMERICA;
    } else {
        return DESCONOCIDA;
    }
}

void imprimirTipoCadena(const char* str) {
    TipoCadena tipo = identificarTipoCadena(str);

    switch(tipo) {
        case NUMERICA:
            std::cout << "La cadena es numerica." << std::endl;
            break;
        case ALFABETICA:
            std::cout << "La cadena es alfabetica." << std::endl;
            break;
        case ALFANUMERICA:
            std::cout << "La cadena es alfanumerica." << std::endl;
            break;
        default:
            std::cout << "La cadena contiene caracteres no válidos." << std::endl;
            break;
    }
}

int main() {
    const char* cadena1 = "12345";
    const char* cadena2 = "abc123";
    const char* cadena3 = "abcde";
    const char* cadena4 = "abc@123";

    imprimirTipoCadena(cadena1); 
    imprimirTipoCadena(cadena2); 
    imprimirTipoCadena(cadena3); 
    imprimirTipoCadena(cadena4); 

    return 0;
}
