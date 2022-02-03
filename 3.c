/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Usando a data/hora como semente.
    srand(time(NULL));

    int dado1 = rand() % 7;
    int dado2 = rand() % 7;

    int soma = dado1 + dado2;
    printf("O valor do dado 1 é: %d e do dado 2 é: %d.\n", dado1, dado2);
    printf("A soma dos dados é: %d.\n", soma);
    return 0;
}