/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double soma(double num1, double num2);
double subtracao(double num1, double num2);
double multiplicacao(double num1, double num2);
double divisao(double num1, double num2);
double potenciacao(double num1, double num2);

int main(){
    double num1, num2, resultado;
    char operador;
    printf("Digite o primeiro valor: ");
    scanf("%lf", &num1);
    printf("Digite o segundo valor: ");
    scanf("%lf", &num2);
    printf("Informe a operação: ");
    scanf("\n%c", &operador);;

    switch (operador){
        case '+': 
            resultado = soma(num1, num2);
            break;
        case '-': 
            resultado = subtracao(num1, num2);
            break;
        case '*': 
            resultado = multiplicacao(num1, num2);
            break;
        case '/': 
            resultado = divisao(num1, num2);
            break;
        case '^': 
            resultado = potenciacao(num1, num2);
            break;
        default:
            printf("Operação Inválida!!\n");
            exit(-1);
    } 
    printf("%.2lf %c %.2lf = %.2lf\n", num1, operador, num2, resultado);
}
double soma(double num1, double num2){
    double resultado = num1 + num2;
    return resultado;
}
double subtracao(double num1, double num2){
    double resultado = num1 - num2;
    return resultado;
}
double multiplicacao(double num1, double num2){
    double resultado = num1 * num2;
    return resultado;
}
double divisao(double num1, double num2){
    double resultado;
    if (num2 == 0){
        printf("ERRO: Divisão por zero!\n");
        exit(-1);
    }
    else{
        resultado = num1 / num2;
        return resultado;
    }
}
double potenciacao(double num1, double num2){
    double resultado = pow(num1, num2);
    return resultado;
}
