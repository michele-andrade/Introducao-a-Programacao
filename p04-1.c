/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#include <math.h>

int main()
{
    double peso, altura;
    printf("Digite o seu peso: \n");
    scanf("%lf", &peso);
    printf("Digite sua altura: \n");
    scanf("%lf", &altura);
    
    double IMC = peso / pow(altura, 2);

    if(IMC < 18.5) {
        printf("Abaixo do peso!\n");
    }
    else if(IMC > 18.5 && IMC < 25){
        printf("Peso normal!\n");
    }
    else if (IMC > 25 && IMC < 30){
        printf("Acima do peso!\n");
    }
    else {
        printf("Obeso!\n");
    }
    return 0;
}