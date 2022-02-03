#include <stdio.h>



int main(int argc, char **argv){

    if (argc == 0){
        argv[1] = "joao";
    };
    printf("argc vale %d", argc);
    for (int i = 0; i < argc + 1; i++){
        printf("argv[%d]: %s\n", i, argv[i]);
    }
   return 0;
}
