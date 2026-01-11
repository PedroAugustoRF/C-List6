#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int intervaloChute = 0;
    bool intervaloFalso = false;
    do {
        intervaloFalso = false;
        printf("Digite um valor entre 10 e 100:");
        scanf("%d", &intervaloChute);
        if(intervaloChute < 10 || intervaloChute > 100){
            printf("\nValor invalido!\n");
            intervaloFalso = true;
        }
    }while(intervaloFalso);

    srand(time(NULL));

    for(int i = 1; i <= intervaloChute; i++) {
        int numRand = rand() % intervaloChute + 1;
        printf("Valor aleatorio %d: %d \n", i, numRand);
    }
    return 0;
}
