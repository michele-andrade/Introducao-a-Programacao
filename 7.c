/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{
    double resistor1, resistor2;
    printf("Digite o valor dos dois resistores em ohms:\n");
    scanf("%lf", &resistor1);
    scanf("%lf", &resistor2);
    
    // Cálculo da resistência equivalente dos dois resistores em paralelo.
    double req = (resistor1 * resistor2) / (resistor1 + resistor2);

    printf("O valor da resistência equivalente da associação em paralelo é: %2.lf\n", req);

    return 0;
}