/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{

    int cliente;
    double limite, saldo;
    for (int i = 0; i < 3; i++){
        printf("Digite o numero da conta do cliente: ");
        scanf("%d", &cliente);
        printf("Digite o limite de crédito do cliente antes da recessão: ");
        scanf("%lf", &limite);
        printf("Digite o saldo atual do cliente (valor que deve a empresa): ");
        scanf("%lf", &saldo);
        double novoLimite = limite / 2;
        printf("O novo limite de crédito para o cliente é: %.2lf\n", novoLimite);
        if (saldo > novoLimite){
            printf("O cliente %d tem o saldo atual maior que seu novo limite.\n", cliente);
        }
    }
    return 0;
}