#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numUm = 0, numDois = 0, somaPar = 0, somaImpar = 0;
    bool numDoisInvalido = false;
    do{
        numDoisInvalido = false;
        printf("\nDigite o primeiro numero:");
        scanf("%d", &numUm);
        printf("\nDigite o segundo numero (Tem que ser maior que o primeiro numero):");
        scanf("%d", &numDois);
        if(numUm > numDois){
            printf("\nO segundo valor tem que ser maior!");
            numDoisInvalido = true;
        }
    }while(numDoisInvalido);
    for(int i = numUm + 1; i < numDois; i++){
        if(i % 2 == 0){
            somaPar += i;
        }
        else{
          somaImpar += i;
        }
    }
    printf("\nSoma dos valores pares entre %d e %d e %d", numUm, numDois, somaPar);
    printf("\nSoma dos valores impares entre %d e %d e %d", numUm, numDois, somaImpar);
    return 0;
}
