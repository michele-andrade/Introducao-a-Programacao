/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{
    double num1, num2;
    printf("Digite os dois números reais.\n");
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    
    double soma = (num1 + num2);
    
    printf("A soma dos números %.2lf e %.2lf é: %.2lf.\n", num1, num2, soma);
    return 0;
}