/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#include <math.h>

int main()
{
    double numero;
    printf("Digite um número real:\n");
    scanf("%lf", &numero);
    
    double inteiro = trunc(numero);
    double decimal = numero - inteiro;
    printf("Parte inteira: %.2lf \n", inteiro);
    printf("Parte decimal: %.2lf \n", decimal);
    return 0;
}