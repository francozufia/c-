#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand (time(NULL));

    char letras[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char cargaAleatoria[100];
    int i, j, auxiliar, contador;

    contador = 0;

    for (i = 0; i < 100; i++) {
        auxiliar = rand() % 26;
        cargaAleatoria[i] = letras[auxiliar];
        printf( "%c \n" ,cargaAleatoria[i]);
    }
    for (j = 0; j < 26; j++) {
       for (i = 0; i < 100; i++) {
            if (letras[j] == cargaAleatoria[i]){
                contador++;
            }
       }
      
       printf(  "Letra %c \n " , letras[j] );
       printf( " aparece %d veces \n" ,contador );
       contador = 0;
    }    

    return 0;
}
