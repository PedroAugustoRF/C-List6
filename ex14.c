#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade = 0;
    do{
        printf("\nDigite a idade do nadador (Se digitar a idade \"0\", o programa sera encerrado):");
        scanf("%d", &idade);

        if(idade < 1 || idade > 100){
          printf("\nIdade invalida!");
        }
        else if(idade >= 5 && idade <= 7){
            printf("\nInfantil A");
        }
        else if(idade >= 8 && idade <= 10){
            printf("\nInfantil B");
        }
        else if(idade > 11 && idade <= 13){
            printf("\nJuvenil A");
        }
        else if(idade >= 14 && idade <= 17){
            printf("\nJuvenil B");
        }
        else if(idade >= 18){
            printf("\nAdulto");
        }
    }while(idade != 0);
    printf("\nVoce digitou a idade \"0\", programa encerrado.");
    return 0;
}