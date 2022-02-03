/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>

void converterCelsius(float celsius, float *fahrenheit, float *kelvin);

void converterCelsius(float celsius, float *fahrenheit, float *kelvin){
   *fahrenheit = ((celsius * 9.0) / 5.0) + 32.0;
   *kelvin = celsius + 273.15;
}

int main(){
   float celsius, fahrenheit, kelvin;
   printf("Digite a temperatura em Celsius: \n");
   scanf("%f", &celsius);
   converterCelsius(celsius, &fahrenheit, &kelvin);

   printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);
   printf("A temperatura em Kelvin é: %.2f\n", kelvin);

   return 0;
}