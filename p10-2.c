/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
   
#include <stdio.h>
#include <string.h>

int main()
{   
    printf("Digite o nome completo: ");
    char nomeCompleto[70];
    fgets(nomeCompleto, 70, stdin);

    int tam = strlen(nomeCompleto) - 2;
    char sobrenome_invertido[70];
    int j = 0;
    // fazendo o vetor com as ultimas letras do vetor nome, ate encontrar o espaço.
    for (int i = tam; nomeCompleto[i] != ' '; i--){
        sobrenome_invertido[j] = nomeCompleto[i];
        j++;
    }
    sobrenome_invertido[j] = '\0';
    
    // Como o sobrenoome esta invertido fazer um novo vetor que recebe as letras na ordem certa. 
    int aux = strlen(sobrenome_invertido) - 1;
    char sobrenome[70];
    int k = 0;
    for (int i = aux; i >= 0; i--){
        sobrenome[k] = sobrenome_invertido[i];
        k++;
    }
    sobrenome[k] = '\0';

    // Vetor para receber o nome.
    char nome[70];
    int aux_1 = (tam - aux);
    int x = 0;
    for(int i = 0; i < aux_1; i++){
        nome[x] = nomeCompleto[i];
        x++;
    }
    nome[x] = '\0';
    // Para saber total de letras.
    int contador = 0;
    for (int i = 0; nomeCompleto[i] != '\0'; i++){
        if (nomeCompleto[i] == ' ' || nomeCompleto[i] == '\n'){
            contador++;
        }
    }
    int totalLetras = strlen(nomeCompleto) - contador;


    printf("%s, %s\n", sobrenome, nome);
    printf("Total de letras: %d\n", totalLetras);
    printf("Total de letras do último sobrenome: %ld\n", strlen(sobrenome));


    return 0;
}