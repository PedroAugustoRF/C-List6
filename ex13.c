#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float preco = 0.0, precoNovo = 0.0, precoFinal = 0.0, precoFinalParc = 0.0;
    int operacao;

    do{
        printf("Digite o valor do produto:");
        scanf("%f", &preco);

        printf("\nQual o metodo de pagamento?\n");
        printf("\n<1> A vista em dinheiro, recebe 10% de desconto.");
        printf("\n<2> A vista no cartao de credito, recebe 5% de desconto.");
        printf("\n<3> Em duas vezes no cartao de credito, preco normal de etiqueta sem juros");
        printf("\n<4> Em três vezes no cartao de credito, preco normal de etiqueta mais juros de 10%");
        printf("\n<0> Sair da aplicação");
        scanf("%d", &operacao);

        switch (operacao){
            case 1:
                precoNovo = (preco*10)/100;
                precoFinal = preco-precoNovo;
                printf("\nVoce vai pagar R$:%.2f com desconto de 10%%\n\n\n", precoFinal);
                break;
            case 2:
                precoNovo = (preco*5)/100;
                precoFinal = preco-precoNovo;
                printf("\nVoce vai pagar R$:%.2f com desconto de 5%%\n\n\n", precoFinal);
                break;
            case 3:
                precoFinal = preco/2;
                printf("\nVoce vai pagar R$:%.2f em 2x sem juros!\n\n\n", precoFinal);
                break;
            case 4:
                precoNovo = (preco*10)/100;
                precoFinal = preco+precoNovo;
                precoFinalParc = precoFinal/3;
                printf("\nVoce vai pagar R$:%.2f em 3x com juros de 10%%\n\n\n", precoFinalParc);
                break;
            case 0: printf("\nPrograma encerrado!"); break;
            default: printf("\nValor digitado é invalido!\n\n\n");
            }

    }while(operacao != 0);
    return 0;
}
