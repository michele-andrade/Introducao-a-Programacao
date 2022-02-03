/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>
#include <math.h>

int calculaRaizes(float a, float b, float c, float *raiz1, float *raiz2, float *delta);

int calculaRaizes(float a, float b, float c, float *raiz1, float *raiz2, float *delta){
    *delta = (b * b) - (4 * a * c);
    if (*delta >= 0){
    *raiz1 = (- b + sqrt(*delta)) / (2 * a);
    *raiz2 = (- b - sqrt(*delta)) / (2 * a);
    return 1;
    } 
    else {
        return 0;
    }
}

int main(){
    float a, b, c, raiz1, raiz2, delta;
    printf("Digite o valor do coeficiente a: \n");
    scanf("%f", &a);
    printf("Digite o valor do coeficiente b: \n");
    scanf("%f", &b);
    printf("Digite o valor do coeficiente c: \n");
    scanf("%f", &c);

    if ((calculaRaizes(a, b, c, &raiz1, &raiz2, &delta)) == 1){
        printf("A raiz 1 é: %.2f\n", raiz1);
        printf("A raiz 2 é: %.2f\n", raiz2);
    }
    else {
        printf("A equação não possui raizes reais.\n");
    }

   return 0;
}