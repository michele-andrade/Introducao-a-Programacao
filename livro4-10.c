/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>

int main(){

    double numero;
    double soma = 0;
    double contador = 0;


    do {
        printf("DIGITE UM NÚMERO REAL (PARAR = 9999): ");
        scanf("%lf", &numero);
        if (numero != 9999){
            soma = soma + numero;
            contador++;
        }
    } while (numero != 9999);
    
    double media = soma / contador;

    printf("A média é: %.2lf\n", media);
 
    return 0;
}