/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{
    char letra;
    printf("Digite uma letra, lembrando que deve ser em minúsculo:\n");
    scanf("%c", &letra);

    if((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u')){
       printf("A letra digitada é uma vogal!!!\n");
    }
    else {
        printf("A letra digitada é uma consoante!!!\n");
    }
    return 0;
}