/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{
    int produto = 1;
    for(int i = 1; i <= 15; i++){
        if (i % 2 != 0){
            produto = produto * i;
        }
    }
    printf("Produto dos inteiros ímpares é: %d\n", produto);
    return 0;
}