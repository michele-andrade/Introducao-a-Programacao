/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>

int main(){
    int x = 1, y = 1;
    int aux = 0;
    
    while (aux == 0) {
        printf("Digite os valores de x e y: ");
        scanf("%d", &x);
        scanf("%d", &y);
        if(x % 2 != 0 || y % 2 != 0) {
            printf("Apenas números pares são aceitos.\n");
        }
        else if(x > y) {
            printf("ERRO: x deve ser menor que y:\n");
        }
        else {
            aux = 1;
        }
    }
    while (x < y){
        int aux = y - x;
        int aux1 = aux / 2;
        int i = 0;
        int j = 0;
            while (i < aux1){
                printf(" ");
                i++;
            }
            while (j < x){ 
                printf("*");
                j++;
            }
            while (i < aux1){
                printf(" ");
                i++;
            }
            printf("\n");
            x = x + 2;
    }
    return 0;
}