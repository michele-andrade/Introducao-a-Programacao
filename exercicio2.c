/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{
    float peso, altura;
    printf("Digite seu peso e sua altura:\n");
    scanf("%f", &peso);
    scanf("%f", &altura);
    
    float imc = (peso / (altura * altura));
    
    printf("O resultado do seu IMC é: %.2f\n", imc);
    return 0;
}

