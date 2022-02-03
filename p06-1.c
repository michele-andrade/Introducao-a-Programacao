/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>

long long fat(int n);

int main(){
    int n; 
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf("%d! = %lld\n", n, fat(n));
    return 0;
}

long long fat(int n){
    int i = 1;
    int multiplicador = 1;
    while (i <= n){
        multiplicador = multiplicador * i;
        i++;
    }
    return multiplicador;
}
