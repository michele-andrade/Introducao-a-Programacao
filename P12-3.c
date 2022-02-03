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

int main() {

    char nomeArquivo[50];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    FILE *entrada = fopen(nomeArquivo, "r");
    int qtde;
    
    fscanf(entrada, "%d", &qtde);
    Aluno listaAluno[100];
    char nome[50];
    double nota;
    int frequencia;
    for (int i = 0; i < qtde; i++){
        fscanf(entrada, "%s %lf %d\n", nome, &nota, &frequencia);
        listaAluno[i].nota = nota;
        listaAluno[i].frequencia = frequencia;
        strcpy(listaAluno[i].nome, nome);
    }
    fclose(entrada);

    double somaNota = 0;
    int somafreq = 0;
    int aprovados = 0;

    for(int i = 0; i < qtde; i++){
        somaNota += listaAluno[i].nota;
        somafreq += listaAluno[i].frequencia;
        if(listaAluno[i].nota > 6){
            aprovados++;
        }
    }
    double mediaNota = somaNota / qtde;
    double mediafreq = (somafreq / qtde) *10;
    double aprovacao = 0;
    if (aprovados == qtde){
        aprovacao = 100;
    }
    else {
        aprovacao = (aprovados % qtde) * 10;
    }
    

    printf("Nota média: %.1lf\n", mediaNota);
    printf("Frequência média: %.0lf %%\n", mediafreq);
    printf("Percentual de aprovação: %.0lf %%\n", aprovacao);

    printf("Nomes dos alunos com nota acima da nota média:\n");

    for(int i = 0; i < qtde; i++){
        if(listaAluno[i].nota > mediaNota){
            printf("%s\n", listaAluno[i].nome);
        }
    }
    return 0;

}