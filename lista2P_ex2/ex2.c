//Desenvolva um programa que leia um numero inteiro e calcule a soma de todos os seus dıgitos. Explicac˜ao:
//O programa deve separar cada dıgito do numero e soma-los utilizando operac˜oes matematicas, como divis˜ao
//e modulo, em um loop ate que todos os dıgitos sejam somados.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    int soma=0;

    printf("Digite um numero inteiro positivo (max: 2.147.483.647): ");
    scanf("%d", &n);

    while(n!=0){
        soma += n%10;
        n/=10;
    }

    printf("A soma de todos os seus digitos sao: %d\n\n", soma);





return 0;
}
