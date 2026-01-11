#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numUm = 0, numDois = 0, soma = 0;
    bool numUmFalso, numValido;
    do{
        numUmFalso = false;
        printf("Digite um valor: ");
        scanf("%d", &numUm);

        if(numUm < 1 || numUm > 50) {
            printf("\nValor invalido!\n\n");
            numUmFalso = true;
        }
    }while(numUmFalso);

    do{
        numValido = false;
        printf("Digite outro valor: ");
        scanf("%d", &numDois);

        if(numDois < 1 || numDois > 50) {
            printf("\nValor invalido!\n\n");
        }
        if(numUm > numDois) {
            printf("\nO segundo valor precisa ser maior que o primeiro que vale: %d \n\n", numUm);
            numValido = true;
        }
    }while(numValido);

    for(int i = numUm + 1; i < numDois; i++) {
        soma+=i;
    }
    printf("A Soma dos valores entre %d e %d é %d", numUm, numDois, soma);
    return 0;
}
