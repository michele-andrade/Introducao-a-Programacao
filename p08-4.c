/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>
#include <math.h>

int calculaCPF(long cpf);

int calculaCPF(long cpf){
    int numero = 0;
    int passo1 = 0;
    int contador = 2;
    for (long i = 100; i <= 10000000000; i = i * 10){
        if (i < 10000000000){
            numero = (cpf / i) % 10;
        }
        else{
            numero = (cpf / i);
        }
        passo1 = (numero * contador) + passo1;
        contador++;
    }
    int contador1 = 2;
    int numero1 = 0;
    int passo2 = 0;
    for (long i = 10; i <= 10000000000; i = i * 10){
        if (i < 10000000000){
            numero1 = (cpf / i) % 10;
        }
        else{
            numero1 = (cpf / i);
        }
        passo2 = (numero1 * contador1) + passo2;
        contador1++;
    }

    int validacao1 = (passo1 * 10) % 11;
    int digito1 = (cpf / 10) % 10;
    int validacao2 = (passo2 * 10) % 11;
    int digito2 = (cpf % 10);
    int e_valido = 0;
    if (validacao1 == 10){
        validacao1 = 0;
    }
    if (validacao2 == 10){
        validacao2 = 0;
    }

    if (validacao1 == digito1 && validacao2 == digito2){
        e_valido = 1;
    }

    printf("passo1 %d\n", passo1);
    printf("passo2 %d\n", passo2);
    printf("digito 1 %d\n", digito1);
    printf("digito 2 %d\n", digito2);
    printf("validação 1 %d\n", validacao1);
    printf("validação 2 %d\n", validacao2);
    printf("valido %d\n", e_valido);
    return e_valido;
}

int main(){
    long cpf;
    printf("Digite o número do cpf(APENAS NÚMEROS): ");
    scanf("%ld", &cpf);

    int validacao = calculaCPF(cpf);
    if (validacao == 1){
        printf("O CPF digitado É VÁLIDO!\n");
    }
    else {
        printf("O CPF digitado NÃO É VÁLIDO!\n");
    }
    printf("%d \n", validacao);
    return 0;
}