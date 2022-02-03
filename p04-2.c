/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{
    int idade;
    printf("Digite a idade: \n");
    scanf("%d", &idade);

    if(idade <= 10) {
        printf("O valor a ser pago é: R$ 90,00.\n");
    }
    else if(idade > 10 && idade <= 29){
        printf("O valor a ser pago é: R$ 170,00.\n");
    }
    else if (idade > 29 && idade <= 45){
        printf("O valor a ser pago é: R$ 290,00.\n");
    }
    else if(idade > 45 && idade <= 59) {
        printf("O valor a ser pago é: R$ 400,00.\n");
    }
    else if(idade > 59 && idade <= 65) {
        printf("O valor a ser pago é: R$ 515,00.\n");
    }
    else {
        printf("O valor a ser pago é: R$ 695,00.\n");
    }
    return 0;
}