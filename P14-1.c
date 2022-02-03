/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#include <stdlib.h>

int **criaMatriz(int n) {
    int **matriz;
    matriz = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++){
        (matriz)[i] = malloc(n * sizeof(int));
    }
    return matriz;
}

int verificaMatriz(int **matriz, int n){
    int somaLinha = 0;
    int somaCol = 0;
    int somaDiaPrin = 0;
    int somaDiaSec = 0;
    int VetorSomaLin[n];
    int VetorSomaCol[n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            somaLinha += matriz[i][j];
            somaCol += matriz[j][i];
            if (i == j){
                somaDiaPrin += matriz[i][j];
            }
            if (j == (n - 1 - i)){
                somaDiaSec += matriz[i][j];
            }
        }
        VetorSomaCol[i] = somaCol;
        VetorSomaLin[i] = somaLinha;
        somaLinha = 0;
        somaCol = 0;
    }
    //Comparando as somas
    int resultado = 0;
    // comparando diagonais
    if (somaDiaPrin != somaDiaSec){
        resultado = 1;
    }
    else {
        //comparando os vetores linha e coluna
        for (int i = 0; i < n; i++){
            if(VetorSomaLin[i] != VetorSomaCol[i]){
                resultado = 1;
            }
        }
        //comparando os elementos dos vetores 
        for (int i = 0; i < n - 1; i++){
            if (VetorSomaLin[i] != VetorSomaLin[i + 1] || VetorSomaCol[i] != VetorSomaCol[i + 1]){
                resultado = 1;
            }
        }
        //comparando vetor com a diagonal
        if (VetorSomaLin[0] != somaDiaPrin){
            resultado = 1;
        }  
    }
    return resultado; 
}

void liberaMatriz (int **matriz, int n){
    for (int i = 0; i < n; i++){
        free(matriz[i]);
    }
    free(matriz);
}

int main(){
    int n;
    printf("Digite valor de n:");
    scanf("%d", &n);
    
    printf("Digite os valores da matriz n x n: \n");
    int **quadrado = criaMatriz(n);
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &quadrado[i][j]);
        }
    }

    int verificacao = verificaMatriz(quadrado, n);

    if (verificacao == 1){
        printf("Esta matriz não é um quadrado mágico!\n");
    }
    else{
        printf("Esta matriz é um quadrado mágico!\n");
    }
    liberaMatriz(quadrado, n);

    return 0;
}
