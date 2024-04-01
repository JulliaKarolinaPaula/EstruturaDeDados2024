/*1. Escreva um programa que contenha duas variaveis inteiras. Leia essas variáveis do teclado. 
Em seguida, compare seus endereços e exiba o conteudo do maior endereço.*/
#include <stdio.h>

void maior(int *ptrA, int *ptrB){
        if(ptrA > ptrB){
            printf("O maior eh: %d", *ptrA);
        }else{
            printf("O maior eh: %d", *ptrB);
    }
}

int main(){

    int a, b;
    int *ptrA, *ptrB;

    printf("Digite o primeiro numero: ");
    scanf("%d%*c", &a);
    printf("Digite o segundo numero: ");
    scanf("%d%*c", &b);

    ptrA = &a;
    ptrB = &b;

    maior(ptrA, ptrB);



    return 0;
}