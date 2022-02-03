/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#include <string.h>

int main()
{   
    char palavra[100];
    char inverso[100];
    printf("Digite uma palavra ou FIM para sair: ");
    scanf("%s", palavra);
    
    while (strcmp(palavra, "FIM") != 0){
           
        int tam = strlen(palavra) - 1;
        int j = 0;
        for (int i = tam; i >= 0; i--){
            inverso[j] = palavra[i];
            j++;
        }
        inverso[j]='\0';

        if(strcmp(palavra, inverso) == 0){
            printf("%s é um palíndromo\n", palavra);
        }
        else {
            printf("%s não é um palíndromo\n", palavra);
        }
        printf("Digite uma palavra ou FIM para sair: ");
        scanf("%s", palavra);
    }
    return 0;
}