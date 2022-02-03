/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

typedef struct {
    double real;
    double imaginario;
}Complexo;

// funcao que retorna x + y
Complexo somaComplexo(Complexo x, Complexo y){
    Complexo soma;
    soma.real = (x.real + y.real);
    soma.imaginario = (x.imaginario + y.imaginario);
    return soma;
}


// funcao que retorna x - y
Complexo subComplexo(Complexo x, Complexo y){
    Complexo subtracao;
    subtracao.real = (x.real + y.real);
    subtracao.imaginario = (x.imaginario + y.imaginario);
    return subtracao;
}

// funçao que retorna x * y
Complexo multComplexo(Complexo x, Complexo y){
    Complexo multiplicacao;
    multiplicacao.real = (x.real * y.real) - (x.imaginario * y.imaginario); 
    multiplicacao.imaginario = (x.real * y.imaginario) + (x.imaginario * y.real) * 'i';
    return multiplicacao;
}
 
int main(){ 
    printf("Calculadora de números complexos!\n\n\n");
    Complexo x, y;
    printf("Digite os valores de a e b (x = a + bi): ");
    scanf("%lf %lf", &x.imaginario, &x.real);
    printf("Digite os valores de c e d (y = c + di): ");
    scanf("%lf %lf", &y.imaginario, &y.real);

    char operacao;
    printf("Digite a operação (+, - ou *): ");
    scanf("\n%c", &operacao);

    Complexo resultado;

    switch (operacao) {
        case '+':
        resultado = somaComplexo(x, y);
        printf("%.0lf + %.0lf i", resultado.real, resultado.imaginario);
        break;
        case '-':
        resultado = subComplexo(x, y);
        printf("%.0lf + %.0lf i", resultado.real, resultado.imaginario);
        break;
        case '*':
        resultado = multComplexo(x, y);
        printf("%.0lf + %.0lf", resultado.real, resultado.imaginario);
        break;
        default:
        printf("Operação errada!");

    }

    return 0;
}