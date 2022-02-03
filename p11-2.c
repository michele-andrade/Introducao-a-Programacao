/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

struct Racional {
    int numerador;
    int denominador;
};

int MDC (int numerador, int denominador){
    int resto;
    do {
        resto = numerador % denominador;
        numerador = denominador;
        denominador = resto;
    } while(resto != 0);
    return numerador;
}

int equal(struct Racional r1, struct Racional r2){
    int resultado = 0;
    if((r1.numerador / MDC(r1.numerador, r1.denominador)) == (r2.numerador / MDC(r2.numerador, r2.denominador))){
        resultado = 1;
    }
    return resultado;
}


int main() {
    struct Racional r1, r2;
    printf("Digite numerador e denominador de r1: ");
    scanf("%d %d", &r1.numerador, &r1.denominador);
    printf("Digite numerador e denominador de r2: ");
    scanf("%d %d", &r2.numerador, &r2.denominador);

    if (equal(r1, r2) == 1){
        printf("r1 e r2 são iguais!!\n");
    }
    else{
        printf("r1 e r2 são diferentes!!\n");
    }
    return 0;
}