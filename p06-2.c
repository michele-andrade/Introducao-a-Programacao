/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>

int ehPrimo(int n);

int main(){
    int n; 
    printf("Digite um número: ");
    scanf("%d", &n);
    
    if (ehPrimo(n) == 1){
        printf("%d é um número primo!\n", n);
    }
    else{
        printf("%d NÃO é um número primo!\n", n);
    }
    return 0;
}

int ehPrimo(int n){
    int i = 2;
    int primo = 1;
    if (n == 1){
        return 0;
    }
    while (i < (n / 2)){
        if (n % i == 0){
            primo = 0;
            break;
        }
        i++;
    }
    if (primo == 0){
        return 0;
    }
    else{
        return 1;
    }
}
