#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void imprimeMenu(){
    printf("----------MENU-----------\n");
    printf("Op��o 1) Selecionar\n");
    printf("Op��o 2) Selecionar\n");
    printf("Op��o 3) Selecionar\n");
    printf("Informe o numero da op��o: ");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;

    imprimeMenu();
    scanf("%d",&x);

    while(x>3 || x<1){
        printf("Informe um valor v�lido: ");
        scanf("%d",&x);
    }
    return 0;
}
