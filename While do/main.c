#include <stdio.h>
#include <stdlib.h>

// Autor: João

int main()
{
    int vet[10] = {10, 20, 30, 40, 50};
    int i;

    for(i=0; i<5; i++){
    printf("Insira o elemento da posicao %i:", i);
    scanf("%i", &vet[i]);
    }


    for(i=0; i<5; i++){
    printf("%i\n", vet[i]);
    }
    printf("\nOk, tudo certo e isso foi os vetores :) ");


   return 0;
}
