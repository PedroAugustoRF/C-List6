#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char palavra[50];
    int numVog = 0;
    printf("Digite a palavra: ");
    fgets(palavra, 50, stdin);

    for(int i = 0; i < strlen(palavra); i++){
        palavra[i] = tolower(palavra[i]);
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            numVog++;
        }
    }
    printf("Sua palavra tem %d vogais.\n", numVog);
    return 0;
}