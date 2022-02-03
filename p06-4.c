/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>

int main(){
    int linha, coluna;
    printf("Movimentos de um Bispo no xadrez!\n");
    printf("Digite a linha em que o Bispo se encontra: ");
    scanf("%d", &linha);
    printf("Digite a coluna em que o Bispo se encontra: ");
    scanf("%d", &coluna);

    printf("Movimentos possíveis: \n");

    printf("\t1\t2\t3\t4\t5\t6\t7\t8\n");
    printf("-------------------------------------------------------------------------\n");

    int i = 0;
    int j = 0;
    while (i < 8){
        j = 0;
        printf("%d\t", i + 1);
        while (j < 8){
            if (i + j == linha - 1 + coluna -1 || coluna - linha == j - i){
                printf("x\t");
            }
            else {
                printf("-\t");
            }
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}