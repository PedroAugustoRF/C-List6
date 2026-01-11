#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int i = 1;
    do{
        printf("O loop sera interrompido quando voce apertar: \"ESC\" \n");
        printf("Valor: %d \n", i);
        i++;
        if(kbhit() && getch() == 27) {
            i = 500001;
        }
    }while(i <= 500000);
    printf("Loop findado! \n");
    return 0;
}
