
#include <stdio.h>
#include <stdlib.h>


int somaquad(int n) {
    int soma = 0, dig;

    while(n!=0) {
        dig = n%10;
        soma += dig*dig;
        n /= 10;
    }

    return soma;
}

int feliz(int n) {
    int lento = n, rapido = somaquad(n);


    while(rapido != 1 && lento != rapido) {
        lento = somaquad(lento);
        rapido = somaquad(somaquad(rapido));
    }
    return rapido == 1;
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Por favor, insira um numero positivo.\n");
        return 1;
        }

    if(feliz(n)) {
        printf("%d e um numero feliz!!\n", n);
    }
    else {
        printf("%d *NAO* e um numero feliz :(\n", n);
    }

    return 0;
}

