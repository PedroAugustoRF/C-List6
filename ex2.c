#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x = 0, i = 0;

    printf("Digite um valor: \n");
    scanf("%d", &x);

    do{
        printf("Valor: %d \n", i);
        i++;
    }while(i <= x);

    return 0;
}