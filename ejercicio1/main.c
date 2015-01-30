/* 
 * File:   main.c
 * Author: EndUser
 *
 * Created on 30 de enero de 2015, 11:53 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char palabra[32], copiaPalabra[32];
    int x = 0, i = 0;
    int palindromo = 0;
    printf ("Escribe la palabra: ");
    scanf("%s",&palabra);
    
    //Se puede usar la funcion strcpy
   
   
    for (i=strlen(palabra) -1;i>= 0; i--, x++) {        
        copiaPalabra[x] = palabra[i];
        //printf("%c\n",palabra[i]);
        
    }
    i = 0;
    for (i = 0; i <= strlen(palabra)-i; i++) {
        if (palabra[i] == copiaPalabra[i]) {
            palindromo = 1;
        }                                     
    }
    if (palindromo == 0)
        printf("La palabra \"%s\" no es palindromo \n",palabra);
    else
        printf("La palabra \"%s\"es palindromo \n",palabra);
    /*
    printf("Longitud palabra: %d'\n",strlen(palabra));
    printf("Longitud copiaPalabra: %d\n",strlen(copiaPalabra));
    printf("Text copiaPalabra: %s\n",copiaPalabra);
    */
    return (EXIT_SUCCESS);
}

