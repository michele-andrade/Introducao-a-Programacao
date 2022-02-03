/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>

int main()
{
    char sexo, estado;
    printf("Digite o sexo:\n");
    scanf("%c", &sexo);
    printf("Digite a inicial do estado civil: \n");
    scanf("\n%c", &estado);

    // Para o sexo feminino
    if(sexo == 'F' || sexo == 'f') {
        switch (estado) {
            case 'c':
               printf("Casada.\n");
               break;
            case 's':
               printf("Solteira.\n");
               break;
            case 'v':
               printf("Viúva.\n");
               break;
            case 'd':
               printf("Divorciada.\n");
               break;
            case 'C':
               printf("Casada.\n");
               break;
            case 'S':
               printf("Solteira.\n");
               break;
            case 'V':
               printf("Viúva.\n");
               break;
            case 'D':
               printf("Divorciada.\n");
               break;
            default:
               printf("Inválido.\n");
       }
    }

    // Para o sexo masculino
    else if (sexo == 'M' || sexo == 'm') {
        switch (estado) {
            case 'c':
               printf("Casado.\n");
               break;
            case 's':
               printf("Solteiro.\n");
               break;
            case 'v':
               printf("Viúvo.\n");
               break;
            case 'd':
               printf("Divorciado.\n");
               break;
            case 'C':
               printf("Casado.\n");
               break;
            case 'S':
               printf("Solteiro.\n");
               break;
            case 'V':
               printf("Viúvo.\n");
               break;
            case 'D':
               printf("Divorciado.\n");
               break;
            default:
               printf("Inválido.\n");
        }
    }
    else {
       printf("Inválido.\n");
    } 
    return 0;
}