/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main(){
    // lendo o valor de n que será o tamanho do vetor
    int n;
    do {
        printf("Digite o valor de n: ");
        scanf("%d", &n);
        if (n < 2){
            printf("ERRO n deve ser maior que 2");
        }
    } while (n < 2);

    int vetor[n];
    //atribuindo o valor 1 nas duas primeiras posições do vetor
    vetor[0] = 1;
    vetor[1] = 1;
    printf("%d %d ", vetor[0], vetor[1]);
    // criando o vetor
    for (int i = 2; i < n; i++){
        vetor[i] = vetor[i - 1] + vetor[i - 2];
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0; 
}