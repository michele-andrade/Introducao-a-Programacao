/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#define POSI_MAX 50

int main(){
    // lendo o valor de n que será o tamanho do vetor
    int n;
    printf("Digite a quantidade de posições do vetor: ");
    scanf("%d", &n);

    int vetor[POSI_MAX];
    // criando o vetor
    for (int i = 0; i < n; i++){
        printf("Digite um número:");
        scanf("%d", &vetor[i]);
    }
    int auxiliar = 0;
    for (int i = 0; i < n; i++){
        auxiliar = vetor[i];
        for (int j = 0; j < auxiliar; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0; 
}