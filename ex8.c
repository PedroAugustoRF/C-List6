#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numUm = 0, numDois = 0, soma = 0;
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
        soma += i;
    }
    printf("\nSoma dos valores entre %d e %d é %d", numUm, numDois, soma);
    return 0;
}
