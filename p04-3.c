/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{
   double salario, salario_novo, diferenca;
   int codigo;
   printf("Digite o salário:\n");
   scanf("%lf", &salario);
   printf("Digite o Código do cargo: \n");
   scanf("%d", &codigo);

    // Para cargo com codigo 100
      switch (codigo) {
         case 100:
            salario_novo = salario + (salario * 0.03);
            diferenca = salario_novo - salario;
            printf("Salário antigo: %.3lf.\n", salario);
            printf("Novo salário: %.3lf.\n", salario_novo);
            printf("Diferença entre os salários é: %.3lf\n", diferenca);
            break;
         case 101:
            salario_novo = salario + (salario * 0.05);
            diferenca = salario_novo - salario;
            printf("Salário antigo: %.3lf.\n", salario);
            printf("Novo salário: %.3lf.\n", salario_novo);
            printf("Diferença entre os salários é: %.3lf\n", diferenca);
            break;
         case 102:
            salario_novo = salario + (salario * 0.075);
            diferenca = salario_novo - salario;
            printf("Salário antigo: %.3lf.\n", salario);
            printf("Novo salário: %.3lf.\n", salario_novo);
            printf("Diferença entre os salários é: %.3lf\n", diferenca);
            break;
         case 201:
            salario_novo = salario + (salario * 0.1);
            diferenca = salario_novo - salario;
            printf("Salário antigo: %.3lf.\n", salario);
            printf("Novo salário: %.3lf.\n", salario_novo);
            printf("Diferença entre os salários é: %.3lf\n", diferenca);
            break;
         default:
            salario_novo = salario + (salario * 0.15);
            diferenca = salario_novo - salario;
            printf("Salário antigo: %.3lf.\n", salario);
            printf("Novo salário: %.3lf.\n", salario_novo);
            printf("Diferença entre os salários é: %.3lf\n", diferenca);
      }
   return 0;
}