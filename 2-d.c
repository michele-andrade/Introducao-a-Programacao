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
    
    double raiz = sqrt(pow(num1, 2) + pow(num2, 2));
    
    printf("A raiz quadrada da soma dos quadrados é: %.2lf.\n", raiz);
    return 0;
}