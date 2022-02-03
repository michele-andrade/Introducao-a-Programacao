/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>

double calculaComissao(double vendas);

double calculaComissao(double vendas) {
    double comissao;
    if (vendas > 5000.00){
        comissao = vendas * 0.25;
    }
    else if (vendas > 2500.00){
        comissao = vendas * 0.20;
    }
    else {
        comissao = vendas * 0.15;
    }
    return comissao;
}
int main(){
    double vendas;
    printf("Digite o valor total das vendas: ");
    scanf("%lf", &vendas);

    double comissao = calculaComissao(vendas);

    printf("O valor da comissão é: %.2lf\n", comissao);
    return 0;
}