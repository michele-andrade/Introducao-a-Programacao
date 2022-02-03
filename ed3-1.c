/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>

void calculoarea(int raio, double *area);

void calculoarea(int raio, double *area) {
    const double PI = 3.141592;
    *area = PI * (raio * raio);
}
int main(){
    int raio;
    printf("Digite o valor do raio: ");
    scanf("%d", &raio);
    double area;

    calculoarea(raio, &area);

    printf("A área do círculo é: %.2lf\n", area);
    return 0;
}