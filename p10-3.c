/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#include <string.h>

int main()
{   
    printf("Digite o texto para censurar:\n");
    char texto[200];
    fgets(texto, 200, stdin);

    for (int i = 0; texto[i] != '\0'; i++){
        switch(texto[i]){
            case 'a':
                texto[i] = '@';
                break;
            case 'e':
                texto[i] = '_';
                break;
            case 'i':
                texto[i] = '|';
                break;
            case 'o':
                texto[i] = '0';
                break;
            case 'u':
                texto[i] = '#';
                break;
            case 's':
                texto[i] = '$';
                break;
            case 'A':
                texto[i] = '@';
                break;
            case 'E':
                texto[i] = '_';
                break;
            case 'I':
                texto[i] = '|';
                break;
            case 'O':
                texto[i] = '0';
                break;
            case 'U':
                texto[i] = '#';
                break;
            case 'S':
                texto[i] = '$';
                break;
        }
    }
    printf("%s\n", texto);

    return 0;
}