//2. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição do array.

#include <stdio.h>

int main(){

    double vet[10];
    double *ptr;

    for (int i = 0; i < 10; i++){
        ptr = &vet[i];
        printf("ENDERECO POSICAO %d = %p\n", i+1, ptr);
    }

    return 0;
}