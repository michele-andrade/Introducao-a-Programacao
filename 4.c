/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   TURMA:43
   */ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    int e_bissexto;
    printf("Digite o ano em formato aaaa:\n");
    scanf("%d", &ano);
    // Cálculo para saber se o ano é bissexto.
    if(((ano % 4 == 0) && (ano % 100 != 0)) || ((ano % 100 == 0) && (ano % 400 == 0))){
        e_bissexto = 1;
    }
    else {
        e_bissexto = 0;
    }
    
    //Cálculo para Páscoa 
    int A = ano % 19;
    int B = ano / 100;
    int C = ano % 100;
    int D = B / 4;
    int E = B % 4;
    int F = (B + 8) / 25;
    int G = (B - F + 1) / 3;
    int H = ((19 * A) + B - D - G + 15) % 30;
    int I = C / 4;
    int K = C % 4;
    int L = (32 + (2 * E) + (2 * I) - H - K) % 7;
    int M = (A + 11 * H + 22 * L) / 451;
    
    // Para saber o mês
    int mes = (H + L - (7 * M) + 114) / 31;
    // Para saber o dia 
    int dia = (H + L - (7 * M) + 114) % 31 + 1;

    // sexta feira santa: 
    int diasexta = dia - 2;
    int messexta = mes;
    if(diasexta <= 0){
       messexta = mes - 1;
       diasexta = 31 - abs(diasexta);
    }
    // terça feira de carnaval; 
    int mesterca = 0;
    int diaterca = 0;
    if ((mes == 4) && (dia > 16)){
        mesterca = mes - 1;
        diaterca = 47 - dia;
        diaterca = diaterca - 31;
    }
    else {
        mesterca = 2;
        if (mes == 4)
        {             
            diaterca = 16 - dia;
        }
        else
        {
            diaterca = 47 - dia;
        }

            if(e_bissexto == 1){
               diaterca = diaterca - 29;
            }
            else {
               diaterca = diaterca - 28;
            }
    }
    diaterca = (diaterca) * (-1);


    // Corpus Cristi
    int diacorpus = dia - 1;
    int mescorpus = 0;
    if((mes == 3) || (mes == 4 && dia == 1)) {
        mescorpus = 5;
    }
    else {
        mescorpus = 6;
    }

    printf("Páscoa: Mês %d, dia %d\n", mes, dia);
    printf("Sexta feira Santa: Mês %d, dia %d\n", messexta, diasexta);
    printf("Terça feira de Carnaval: Mês %d, dia %d\n", mesterca, diaterca);
    printf("Corpus Cristi: Mês %d, dia %d\n", mescorpus, diacorpus);

    return 0;
}