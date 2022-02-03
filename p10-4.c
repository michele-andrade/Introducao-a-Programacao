/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#include <string.h>

void toUpper(char string[]){
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] >= 97 && string[i] <= 122){
            string[i] -= 32;
        }
    }
}

int main()
{   
    printf("Digite o texto:\n");
    char string[200];
    fgets(string, 200, stdin);

    toUpper(string);
    
    printf("%s\n", string);

    return 0;
}