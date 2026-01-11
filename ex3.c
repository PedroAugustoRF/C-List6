#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x = 0;

    printf("Digite um valor: \n");
    scanf("%d", &x);

    for(int i = 0; i <= x; i++){
        printf("Valor: %d \n", i);
    }
    return 0;
}