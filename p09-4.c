/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#define NUM_MAX 100

int main(){

    int n;
    printf("Digite a quantidade de alunos ");
    scanf("%d", &n);


    double NOTA_1[NUM_MAX], NOTA_2[NUM_MAX];

    for (int i = 0; i < n; i++){
        printf("Digite a primeira nota: ");
        scanf("%lf", &NOTA_1[i]);
        printf("Digite a segunda nota: ");
        scanf("%lf", &NOTA_2[i]);
        if (((NOTA_1[i] + NOTA_2[i]) / 2) >= 60){
            printf("Aluno %d APROVADO!\n", i + 1);
        }
        else {
            printf("Aluno %d REPROVADO!\n", i + 1);
        }
    }
    return 0;
}