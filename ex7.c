#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num = 0;
    bool numFalso = false;
    do{
        numFalso = false;
        printf("Digite um valor de 1 a 5: \n");
        scanf("%d", &num);
        if(num < 1 || num > 5){
            printf("Valor invalido, digite novamente!\n");
            numFalso = true;
        }
    }while(numFalso);
    printf("Numero informado esta correto!\n");
    return 0;
}
