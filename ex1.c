#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x = 0, i = 0;

    printf("Digite um valor: \n");
    scanf("%d", &x);

    while(i <= x){
        printf("Valor: %d \n", i);
        i++;
    }
    return 0;
}