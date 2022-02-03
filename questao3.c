/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Digite três números inteiros:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a > b && a > c && b > c){
       printf("Menor: %d\n", c);
       printf("Intermediario: %d\n", b);
       printf("Maior: %d\n", a);
    }
    if(a > b && a > c && c > b){
       printf("Menor: %d\n", b);
       printf("Intermediario: %d\n", c);
       printf("Maior: %d\n", a);
    }
    if(b > a && b > c && a > c){
       printf("Menor: %d\n", c);
       printf("Intermediario: %d\n", a);
       printf("Maior: %d\n", b);
    }
   if(b > a && b > c && c > a){
       printf("Menor: %d\n", a);
       printf("Intermediario: %d\n", c);
       printf("Maior: %d\n", b);
    }
   if(c > a && c > b && a > b){
       printf("Menor: %d\n", b);
       printf("Intermediario: %d\n", a);
       printf("Maior: %d\n", c);
    }
   if(c > a && c > b && b > a){
       printf("Menor: %d\n", a);
       printf("Intermediario: %d\n", b);
       printf("Maior: %d\n", c);
    }
    return 0;
}