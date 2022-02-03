/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    double nota;
    int frequencia;
} Aluno;

void EscreveDados(Aluno alunos[], int nAlunos){

    FILE* arquivo = fopen("alunos.txt", "w+");

    fprintf(arquivo, "%d\n", nAlunos);
    for(int i = 0; i < nAlunos; i++){
        fprintf(arquivo, "%s %.3lf %d\n", alunos[i].nome, alunos[i].nota, alunos[i].frequencia);
    }
    fclose(arquivo);

}

int main() {

    int nAlunos;
    Aluno A[20];

    printf("Digite o número de alunos: ");
    scanf("%d", &nAlunos); 
    getchar();

    for(int i = 0; i < nAlunos; i++){
       
        printf("Digite o nome do aluno: ");
        fgets(A[i].nome, 50, stdin);
        printf("Digite a nota: ");
        scanf("%lf", &A[i].nota);
        printf("Digite a frequencia: ");
        scanf("%d", &A[i].frequencia);
        getchar();
    }

    EscreveDados(A, nAlunos);
    return 0;

}