/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>

void calculoDolar(double real, double cotacao, double *dolar);

void calculoDolar(double real, double cotacao, double *dolar) {
    *dolar = real / cotacao;
}
int main(){
    double real, cotacao, dolar;
    printf("Digite o valor em real: ");
    scanf("%lf", &real);
    printf("Digite o valor de cotação do dolar: ");
    scanf("%lf", &cotacao);

    calculoDolar(real, cotacao, &dolar);

    printf("O valor convertido é: %.2lf\n", dolar);
    return 0;
}