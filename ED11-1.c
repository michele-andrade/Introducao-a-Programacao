/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>


void lerMatriz (int matriz[10][10], int m, int p) {
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            printf("Digite o valor de matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("FIM DA MATRIZ\n");
}
void imprimirMatriz(int matriz[10][10], int m, int n){

    printf("A matriz C é: \n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int m, n, p, q;

    do {
        printf("Digite as dimensões da matriz A (A m x p): ");
        scanf("%d %d", &m, &p);
        printf("Digite as dimensões da matriz B (B q x n): ");
        scanf("%d %d", &q, &n);

        if (p != q){
            printf("ERRO: p deve ser igual a q!");
        }
    } while(p != q);
    
    int matrizA[10][10];
    lerMatriz(matrizA, m, p);
    int matrizB[10][10];
    lerMatriz (matrizB, q, n);

    int matrizC[10][10];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            matrizC[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < p; k++){
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    imprimirMatriz(matrizC, n, m);

    return 0;
}



