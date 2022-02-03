/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#include <math.h>

int main()
{
    double tempo;
    printf("Digite o instante de tempo em segundos: \n");
    scanf("%lf", &tempo);
    // declarando como constante o valor da gravidade em m/s²:
    const double gravidade = 9.807;
    // Cálculo para velocidade
    double velocidade = gravidade * tempo;
    // Cálculo para distância
    double distancia = (gravidade * pow(tempo, 2)) / 2;

    printf("A velocidade no instante de tempo, %.2lf segundos, é: %.3lf m/s\n", tempo, velocidade);
    printf("A distância total percorrida pelo objeto é: %.3lf metros\n", distancia);
    return 0;
}