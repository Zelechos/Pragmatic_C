#include <stdio.h>

main(){
    // Tambien pudimos haber escrito nuestro helloworld.c de esta manera
    printf("hello");
    printf("world");
    printf("\n");
    printf("----------------------------------");
    printf("\n");
    printf("hello programming language [ C ]");
    printf("\n");

    // Pero claro que nos demorariamos mas!!
    // Notese que el "\n" representa un solo caracter y es el salto de linea

    // Tambien tenemos otros ejemplo
    printf("----------------------------------\n");
    // \t => es para la tabulacion
    printf("\testo es para la tabulacion");

    printf("\n----------------------------------\n");
    // \b => es para el retroceso
    printf("esto es para el retroceso\b");

    printf("\n----------------------------------\n");
    // \" => es para las comillas
    printf("\"esto es para las comillas\"");

    printf("\n----------------------------------\n");
    // \\ => es para la diagonal invertida
    printf("\\esto es para la diagonal invertida");

    printf("\n----------------------------------\n");
    // \c => es para escribir la letra c
    printf(" \c esto es para escribir la letra \c");

}
