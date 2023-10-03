#include<stdio.h>

main (){

    int vetor[8], X, Y, soma = 0;

    for (int i = 0; i < 8; i++) { 
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite a posicao de X: ");
    scanf("%d", &X);
    printf("\nDigite a posicao de Y: ");
    scanf("%d", &Y);

    soma = vetor[X] + vetor[Y];

    printf("\nSoma: %d", soma);


}