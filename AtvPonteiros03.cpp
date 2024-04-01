//3. Escreva uma função que dado um número real passado como parâmetro, 
//retorne a parte inteira e a parte fracionária deste número. Escreva um programa que chama esta função

#include <stdio.h>

void resposta(double *y){
    printf("Parte inteira: %d\n", (int)*y);
    printf("Parte fracionada: %lf\n", *y - ((int)*y));
}

int main(){

    double x;
    printf("Digite um numero:");
    scanf("%lf", &x);

    resposta(&x);

    return 0;
}