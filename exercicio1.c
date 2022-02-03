/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{
    int x1, x2, x3;
    printf("Digite os valores de x1, x2 e x3:\n");
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &x3);
    
    int r = (x1 + (x2*x2) + (x3*x3));
    int x = (x1 * x2 * x3);
    int y = (r*r) + (x * x);
    
    printf("x1 = %d, x2 = %d, x3 = %d\n", x1, x2, x3);
    printf("y = %d\n", y);
    printf("este programa possui 4 erros.");
    return 0;
}

