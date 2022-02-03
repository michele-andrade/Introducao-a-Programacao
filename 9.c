/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{
    double elastica, massa, posicao;
    printf("Digite a constante elástica da mola: \n");
    scanf("%lf", &elastica);
    printf("Digite a massa do corpo: \n");
    scanf("%lf", &massa);
    printf("Digite a extensão a partir da posição inicial: \n");
    scanf("%lf", &posicao);
    
    // Cálculo para encontrar a aceleração
    double F = elastica * posicao;
    double aceleracao = F / massa;

    printf("A aceleração do corpo sendo puxado pela mola é: %.2lf\n", aceleracao);
    return 0;
}