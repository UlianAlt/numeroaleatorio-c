#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]){
    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    if(argc == 3){
        srand(time(NULL));
        int result = min + rand() % (max - min + 1);
        printf("%d\n\n", result); 
    }else{
        printf("digite 2 numeros, o minimo e o maximo");
    }

    printf("Feito por PedroUlian (https://github.com/PedroUlian) (https://github.com/UlianAlt)");

    return 0;
}