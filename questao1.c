/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{
    int ano;
    printf("Digite o ano:\n");
    scanf("%d", &ano);

    // Cálculo para saber se o ano é bissexto
    if(((ano % 4) == 0) && ((ano % 100) != 0)){
        printf("O ano %d é bissexto\n", ano);
    }
    else if(((ano % 100) == 0) && ((ano % 400) == 0)){
        printf("O ano %d é bissexto\n", ano);    
    }
    else {
        printf("O ano %d não é bissexto\n", ano);
    }
    return 0;
}
