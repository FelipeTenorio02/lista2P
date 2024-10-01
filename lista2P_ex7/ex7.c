
#include<stdio.h>
#include<stdlib.h>

int main(){

    int eu, vc;
    int rodada=0;

    printf("Escolha: 1 para Pedra\n");
    printf("\t 2 para Papel\n");
    printf("\t 3 para Tesoura\n");
    printf("Voce escolhe: ");
    scanf("%d", &vc);


    eu=(rodada%3)+1;
    rodada++;

    printf("\nminha vez!\n");
    printf("eu escolho: %d\n", eu);

    if(eu==vc){
        printf("Empate!\n");

    }
    else if((vc==1 && eu==3) ||(vc==2 && eu==1) ||(vc==3 && eu==2) ){
        printf("\nVoce ganhou! :(\n");
    }
    else{
        printf("eu venci!! :)\n");
    }






return 0;
}
