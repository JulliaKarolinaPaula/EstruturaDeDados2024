/*4. Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio R. 
A area da superfície e o volume são dados, respectivamente, por:

A = 4 * p * R^2
V = 4/3 * p * R^3*/

#include <stdio.h>
#include <math.h>

void area(double raio, double *r){
    *r= 4 * M_PI * pow(raio, 2);
    printf("AREA = %.2lf\n", *r);
}

void volume(double raio, double *r){
    *r = 4/3 * M_PI * pow(raio, 3);
    printf("VOLUME = %.2lf\n", *r);
    
}

int main(){

    double raio, r;
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);
    area(raio, &r);
    volume(raio, &r);

    return 0;
}