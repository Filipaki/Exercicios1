#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int raio;
float resultado1, resultado2;
printf("insira o raio do circulo:");
scanf("%i", &raio);
resultado1= 3.14 * raio * raio ;
resultado2= 2 * 3.14 * raio;
printf("seu perimetro: %f\n", resultado2);
printf("sua area: %f", resultado1);
return 0;	
}