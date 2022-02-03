/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>
#include <math.h>

double calcularPI(int termos);

double calcularPI(int termos){
    double s = 0;
    double sinal = +1;
    for (int i = 3; i < termos; i+=2){
        s = sinal * (1.0 / pow(i, 3));
        sinal *= -1;
    }
    s++;
    double aux = s * 32;
    double pi = pow(aux, 1.0/3.0);
    return pi;
}

int main(){
    int termos;
    printf("Digite o número de termos para calcular o valor de pi, lembrando que quanto maior o número melhor a precisão: ");
    scanf("%d", &termos);

    double PI = calcularPI(termos);
    printf("o valor de PI é: %.6lf\n", PI);
 
    return 0;
}