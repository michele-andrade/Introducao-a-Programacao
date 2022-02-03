/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int matricula;
    double nota[3];
    int faltas;
    char conceito;
} Aluno;

Aluno encontraAluno(Aluno alunos[], int nAlunos, int matricula){
    Aluno alunoencontrado;
    for (int i = 0; i < nAlunos; i++){
        if (matricula == alunos[i].matricula){
            alunoencontrado = alunos[i];
        }
    }
    return alunoencontrado;
}

int main() {
    int nAlunos, m;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &nAlunos);
    printf("Digite a quantidade de avaliações aplicadas (ou seja, a quantidade de notas): ");
    scanf("%d", &m);
    getchar();

    Aluno alunos[nAlunos];
    double somanota = 0;
    double somaMedia = 0;
    for(int i = 0; i < nAlunos; i++){
        printf("Digite o nome completo: ");
        fgets(alunos[i].nome, 100, stdin);

        printf("Digite o número de matricula: ");
        scanf("%d", &alunos[i].matricula);

        for(int j = 0; j < m; j++){
            printf("Digite a nota: ");
            scanf("%lf", &alunos[i].nota[j]);
            somanota += alunos[i].nota[j];
        }
        alunos[i].media = somanota / m;
        somaMedia += alunos[i].media;
        getchar();
    }
    double mediaTotal = somaMedia / nAlunos;

    printf("A média de todas as notas é: %.2lf\n", mediaTotal);
    
    int matricula;
    printf("Digite a matrícula a ser procurado: ");
    scanf("%d", &matricula);

    Aluno alunoEncontrado = encontraAluno(alunos, nAlunos, matricula);

    printf("O nome completo é: %s", alunoEncontrado.nome);
    printf("A média das notas do aluno é: %lf\n", alunoEncontrado.media);

    return 0;
}
