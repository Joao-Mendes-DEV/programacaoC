#include<stdio.h>

void a(int n){     //utilizei a recursividade para a torre
    if (n > 0){
        printf("Direita \n", n);
        a(n - 1);
    }
}

void b(int t){     //utilizei a recursividade para a rainha
    if (t > 0){
        printf("Esquerda \n", t);
        b(t - 1);
    }
}

int main (){

    int torre = 5;
    int rainha = 8;

    printf("\nTorre.\n");
    a(torre);

    printf("\nBispo.\n");      //utilizei loop aninhado para o bispo com a parte mais interna na horizontal e a externa na vertical conforme pedido
    for (int i = 1; i <= 5; i++){
        for(int j = 1; j <= 2; j++){
            if(j % 2 == 1){
            printf("Direita, ");
            }
        }
        printf("Cima\n");
    }

    printf("\nRainha.\n");
    b(rainha);

    printf("\nCavalo.\n");        //utilizei um loop complexo com multiplas variaveis para o cavalo
    for (int i = 0, j = 4; i < 2 && j >= 2; i++, j--) {
        printf("Cima, ");
        if (j == 3){
            printf("Direita");
        }
    }

    return 0;
}
