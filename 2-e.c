/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2;
    printf("Digite os dois números reais.\n");
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    
    double seno = sin(num1 - num2);
    
    printf("O seno da diferença do primeiro número real pelo segundo é: %.2lf.\n", seno);
    return 0;
}