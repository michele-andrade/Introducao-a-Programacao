/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#define N 7

int main(){
    double vetor[N];
    // criando o vetor
    for (int i = 0; i < N; i++){
        printf("Digite um número:");
        scanf("%lf", &vetor[i]);
    }
    double numero;
    printf("Digite o número a ser procurado: ");
    scanf("%lf", &numero);

    int i;
    int aux = 0;
    for (i = 0; i < N; i++){
        if (vetor[i] == numero){
            aux = 1;
            break;
        }
    }
    if(aux == 1){
        printf("O numero digitado foi encontrado!\n");
    }
    else {
        printf("O numero digitado não foi encontrado!\n");
    }
    return 0; 
}