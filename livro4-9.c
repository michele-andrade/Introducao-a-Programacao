/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{
    int termos;
    printf("Digite o numero de termos que serão digitados: ");
    scanf("%d", &termos);

    int soma = 0;
    for(int i = 0; i < termos; i++){
        int numero;
        printf("Digite um número: ");
        scanf("%d", &numero);
        soma = soma + numero;
    }
    printf("SOMA: %d\n", soma);
    return 0;
}