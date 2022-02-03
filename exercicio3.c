/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{
    float celsius;
    printf("Digite o valor da temperatura em graus Celsius:\n");
    scanf("%f", &celsius);
    
    // Cálculo para temperatura em Kelvin
    float kelvin = celsius + 273.15;
    
    // Cálculo para temperatura em Fahrenheit
    float fahrenheit = ((celsius * 9) / 5 ) + 32;
    
    printf("O resultado da conversão da temperatura em Celsius para Kelvin é: %.2f\n", kelvin);
    printf("O resultado da conversão da temperatura em Celsius para Fahrenheit é: %.2f\n", fahrenheit);
    return 0;
}
