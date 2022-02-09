#include<stdio.h>

/*
    Programa para mostrar fahrenheit y celsius
    para fahr = 0, 20, 40 ..... 300
*/
main(){

    // Creamos nuestro variables de tipo entero
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; // lower limite inferior de la tabla de temperaturas
    upper = 300; // upper limite superior de la tabla de temperaturas
    step = 20; // step incremento 

    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

}