
#include<stdio.h>
#include<stdlib.h>

int main(){

    double n, estimativa;
    double aprox=0.000001;

    printf("Digite um numero que seja positivo: ");
    scanf("%lf", &n);

    estimativa = n/2;

    while((estimativa*estimativa-n > aprox)||(n-estimativa*estimativa > aprox)){
        estimativa=(estimativa+n /estimativa)/2;
    }


    printf("A raiz de %.6lf \nE aproximadamente %.6lf!\n\n", n, estimativa);





return 0;
}
