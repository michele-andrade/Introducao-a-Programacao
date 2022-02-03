/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>



void somaPrimCol(int matriz[3][3], int m, int n) {
    int soma = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < 1; j++){
            soma += matriz[i][j];
        }
    }
    printf("A soma dos elementos da primeira coluna é: %d\n", soma);
}
void produtoPrimLin(int matriz[3][3], int m, int n){
    int produto = 1;
    for (int i = 0; i < 1; i++){
        for (int j = 0; j < n; j++){
            produto *= matriz[i][j];
        }
    }
    printf("O produto dos elementos da primeira linha é: %d\n", produto);
}
void somaTotal(int matriz[3][3], int m, int n){
    int somatotal = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            somatotal += matriz[i][j];
        }
    }
    printf("A soma de todos os elementos da matriz é: %d\n", somatotal);
}

int main(){
    int matriz[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    somaPrimCol(matriz, 3, 3);
    produtoPrimLin(matriz, 3, 3);
    somaTotal(matriz, 3, 3);
    
    return 0;
}
