#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float media = 0.0, notaUm = 0, notaDois = 0;
    bool notaInvalida = false;
    do{
        notaInvalida = false;
        printf("Digite a nota 1: ");
        scanf("%f", &notaUm);
        printf("\nDigite a nota 2: ");
        scanf("%f", &notaDois);

        if(notaUm < 0 || notaUm > 10 && notaDois < 0 || notaDois > 10){
            printf("\nNota Invalida! Redigite.");
            notaInvalida = true;
        }
    }while(notaInvalida);

    media = (notaUm + notaDois) / 2;
    printf("\nA media do aluno foi: %.2f", media);

    if(media <= 6) {
        printf("\nLogo, o aluno foi: Reprovado");
    }
    else{
        printf("\nLogo, o aluno foi: Aprovado");
    }

    return 0;
}
