#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
int nota1, nota2, nota3, nota4;
char aluno1[10], aluno2[10], aluno3[10], aluno4[10];	
printf("nome aluno1:");
scanf("%s", &aluno1);
printf("nome aluno2:");
scanf("%s", &aluno2);
printf("nome aluno3:");
scanf("%s", &aluno3);
printf("nome aluno4:");
scanf("%s", &aluno4);
printf("nota aluno1:");
scanf("%d", &nota1);	/*%i=%d*/
printf("nota aluno2:");
scanf("%d", &nota2);	
printf("nota aluno3:");
scanf("%d", &nota3);	
printf("nota aluno4:");
scanf("%d", &nota4);
printf("ALUNO(A)\tNOTA\n");
printf("========\t====\n");
printf("%s\t\t%d\n", aluno1, nota1);
printf("%s\t\t%d\n", aluno2, nota2);
printf("%s\t\t%d\n", aluno3, nota3);
printf("%s\t\t%d\n", aluno4, nota4);
return 0;
}