/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2;
    printf("Digite os dois números reais.\n");
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    
    double modulo = abs(num1);
    
    printf("O módulo do primeiro número digitado é: %.2lf.\n", modulo);
    return 0;
}