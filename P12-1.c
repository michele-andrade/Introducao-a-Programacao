/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    double peso;
    double calorias;
} Dieta;

void LeDados(Dieta alimentos[], int *qtde){
    char nomeArquivo[50];
    char name[50];
    double p;
    double ncalorias;
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    FILE *entrada = fopen(nomeArquivo, "r");
    
    fscanf(entrada, "%d", &*qtde);
    for (int i = 0; i < *qtde; i++){
        fscanf(entrada, "%s %lf %lf\n", name, &p, &ncalorias);
        alimentos[i].peso = p;
        alimentos[i].calorias = ncalorias;
        strcpy(alimentos[i].nome, name);
    }
    fclose(entrada);
}

int main(){

    int qtde;
    Dieta alimentos[20];
    LeDados(alimentos, &qtde);

    printf("Alimento \t");
    printf("cal/grama\n");
    printf("--------------------------\n");

    for (int i = 0; i < qtde; i++){
        double calGrama = alimentos[i].calorias / alimentos[i].peso;
        printf("%s\t", alimentos[i].nome);
        printf(".3%lf", calGrama);
        printf("\n");
    }

    return 0;
}