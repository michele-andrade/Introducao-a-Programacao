/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>

int calculaDuracao(int horaInicio, int minuInicio, int horaTermino, int minuTermino);

int calculaDuracao(int horaInicio, int minuInicio, int horaTermino, int minuTermino) {
    int duracao;
    if(horaInicio > horaTermino){
        duracao = 1440 - (horaInicio * 60) + minuInicio;
    }
    else{
        duracao = ((horaTermino * 60) + minuTermino) - ((horaInicio * 60) + minuInicio);
    } 
    return duracao;
}
int main(){
    int horaInicio, minuInicio, horaTermino, minuTermino;
    printf("Digite a hora inicial e depois os minutos iniciais do jogo: \n");
    scanf("%d %d", &horaInicio, &minuInicio);
    printf("Digite a hora de término e depois os minutos de término do jogos: \n");
    scanf("%d %d", &horaTermino, &minuTermino);

    int tempo = calculaDuracao(horaInicio, minuInicio, horaTermino, minuTermino);
    printf("A duração total do jogo é: %d minutos\n", tempo);
    return 0;
}