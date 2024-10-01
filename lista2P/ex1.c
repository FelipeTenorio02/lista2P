// Crie um programa que determine se um numero fornecido pelo usuario e perfeito (um numero perfeito
// e igual a soma de seus divisores proprios, exceto ele mesmo). Explica¸c˜ao: O programa deve somar todos os
// divisores proprios do numero e comparar essa soma com o numero original para determinar se ele e perfeito.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int num, cont,s_div;//soma dos divisores, contador, numero
    s_div=0;
    printf("digite um numero inteiro e positivo: ");
    scanf("%d", &num);

    cont=1;
    while(cont<num){
        if(num%cont==0){
            s_div=s_div+cont;
        }
        cont++;
    }
    if(s_div==num){
        printf("o numero e perfeito!");
    }
    else{
        printf("o numero nao e perfeito!!\n\n");
    }



return 0;
}
