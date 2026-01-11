#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char palavra[50];

    printf("Digite a palavra:");
    fgets(palavra, 50, stdin);
    for(int i = 0; i < strlen(palavra); i++){
        printf("%c \n", palavra[i]);
    }
    return 0;
}