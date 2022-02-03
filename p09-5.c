/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

void MAIOR_MENOR(int vetor[], int n, int *maior, int *menor);

int main(){

    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n], maior, menor;

    for (int i = 0; i < n; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor[i]);
    }
    MAIOR_MENOR(vetor, n, &maior, &menor);
    printf("Número MAIOR digitado é: %d\n", maior);
    printf("Número MENOR digitado é: %d\n", menor);

    return 0;
}

void MAIOR_MENOR(int vetor[], int n, int *maior, int *menor){
    *maior = vetor[0];
    *menor = vetor[0];
    for (int i = 1; i < n; i++){
        if (vetor[i] > *maior){
            *maior = vetor[i];
        }
        else if (vetor[i] < *menor){
            *menor = vetor[i];
        }
        
    }
}

