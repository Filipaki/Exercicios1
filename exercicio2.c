#include <stdio.h>
#include <stdlib.h>
int main (){
char nome [40],telefone[40],CEP[40],endereco[40];
printf("digite seu nome:");
scanf("%s", &nome);
printf("digite seu endereco:");
scanf("%s", &endereco);
printf("digite seu CEP:");
scanf("%s", &CEP);
printf("digite seu telefone:");
scanf("%s", &telefone);

printf("sua ficha:\n");
printf("seu nome: %s\n", nome);
printf("seu endereco: %s\n", endereco);
printf("seu CEP: %s\n", CEP);
printf("seu telefone: %s\n", telefone);
return 0;
}