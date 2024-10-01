//Crie um programa que determine se um numero e um numero de Armstrong (ou numero narcisista),
//onde a soma dos dıgitos elevados a potencia do numero de dıgitos resulta no proprio numero (ex: 153 =
//1³ + 5³ + 3³). Explicac˜ao: O programa deve contar o numero de dıgitos, elevar cada dıgito a potencia
//correspondente, soma-los e comparar com o numero original.

#include<stdio.h>
#include<stdlib.h>

int potenciacao(int base, int expoente){
    int potencia=1;
    for(int a=0; a<expoente; a++){
        potencia*=base;
    }
    return potencia;
}

int main(){

    int n,  nOriginal, resto;
    int soma=0, QntDig=0;

    printf("Digite um numero inteiro positivo (max: 2.147.483.647): ");
    scanf("%d", &n);

    nOriginal=n;

    while(n!=0){
        QntDig++;
        n/=10;
    }

    n=nOriginal;
    while(n!=0){
        resto=n%10;
        soma += potenciacao(resto, QntDig);
        n/=10;

    }

    if(soma==nOriginal){
        printf("O numero %d e um numero de Armstrong (ou numero narcisista)!!\n\n", nOriginal);
    }

    else{
        printf("O numero %d *NAO* e um numero de Armstrong (ou numero narcisista) :( \n\n", nOriginal);
    }

return 0;
}
