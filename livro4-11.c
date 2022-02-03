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
    // Maior valor possível para uma variavel do tipo inteiro.
    int menorNumero = 2147483647;
    for(int i = 0; i < termos; i++){
        int numero;
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero < menorNumero){
            menorNumero = numero;
        }
    }
    printf("MENOR NÚMERO: %d\n", menorNumero);
    return 0;
}