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
    
    double produto = (num1 * pow(num2, 2));
    
    printf("O produto do primeiro número pelo quadrado do segundo é: %.2lf.\n", produto);
    return 0;
}