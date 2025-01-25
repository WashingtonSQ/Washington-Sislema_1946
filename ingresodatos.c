#include <stdio.h>
main()
{
    int i; 
    short valor; 
    char letra; 
    bool bandera; 
    float peso; 
    double altura;
    printf ("Ingrese un valor entero: \t");
    scanf("%d", &i) ;
    printf ("Ingrese un valor short: \t");
    scanf("%d", &valor) ;
    printf ("Ingrese un valor char: \t");
    scanf("%c", &letra) ;
    printf ("Ingrese un valor booleano: \t");
    scanf("%d", &bandera) ;
    printf ("Ingrese un valor float: \t");
    scanf("%f", &peso) ;
    printf ("Ingrese un valor double: \t");
    scanf("%d", &altura) ;

    printf ("Valores ingresados:\n")
    printf ("El valor entero es: %d\n" , i);
    printf ("El valor short es: %d\n" , valor);
    printf ("El valor char es: %c\n" , letra);
    printf ("El valor booleano es: %d\n" , bandera);
    printf ("El valor float es: %f\n" , peso);
    printf ("El valor double es: %d\n" , altura);
}