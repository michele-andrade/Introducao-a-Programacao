/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 

#include <stdio.h>

int main(){

    int x, y;
    do {
        printf("Digite os valores de x e y: ");
        scanf("%d", &x);
        scanf("%d", &y);
        if(x % 2 != 0 || y % 2 != 0) {
            printf("Apenas números pares são aceitos.\n");
        }
        else if(x > y) {
            printf("ERRO: x deve ser menor que y:\n");
        }
    } while (x % 2 != 0 || y % 2 != 0 || x > y);

    for (int i = y; i >= x; i = i - 2){

        for (int j = i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}