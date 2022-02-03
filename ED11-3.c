/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

void leMatriz(int matriz[10][10], int n) {
    for (int i = 0; i < n; i++){
        printf("Digite os valores na linha %d: ", i + 1);
        for (int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}


int main(){
    int n;
    printf("Digite valor de n:");
    scanf("%d", &n);

    int matrizA[10][10];
    leMatriz(matrizA, n);

    //imprimindo matriz transposta 
    for (int i = 0; i < 2; i++){
       for (int j = 0; j < 2; j++){
           printf("%d\t", matrizA[j][i]);
        }
        printf("\n");
    }

    return 0;
}
