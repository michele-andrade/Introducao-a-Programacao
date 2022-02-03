/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>
#include <math.h>

void calculoVolume(double raio, double *volume);

void calculoVolume(double raio, double *volume) {
    const double PI = 3.141592;
    *volume = (4 * PI * pow(raio, 3)) / 3;
}
int main(){
    double raio, volume;
    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    calculoVolume(raio, &volume);

    printf("O volume da esfera é: %.2lf\n", volume);
    return 0;
}