/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>

int main(){

    double numero;
    int somapositivos = 0;
    int somanegativos = 0;

    do {
        printf("DIGITE UM NÚMERO REAL (PARAR = 0): ");
        scanf("%lf", &numero);
        if (numero > 0){
            somapositivos++;
        }
        else if(numero < 0){
            somanegativos++;
        }
    } while (numero != 0);

    printf("QUANTIDADE DE POSITIVOS DIGITADOS: %d\n", somapositivos);
    printf("QUANTIDADE DE NEGATIVOS DIGITADOS: %d\n", somanegativos);
 
    return 0;
}