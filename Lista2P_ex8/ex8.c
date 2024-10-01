
#include<stdio.h>
#include<stdlib.h>

int triangular(int n){
    int soma=0;
    int c1=1;

    while(soma<n){
        soma+=c1;
        c1++;
    }
return soma==n;
}

int main(){

    int n;
    printf("Digite um numero(max: 2.147.483.647): ");
    scanf("%d", &n);
    if(triangular(n)){
        printf("O numero %d e triangular!\n", n);
    }
    else{
        printf("O numero %d *NAO* e triangular :(\n", n);
    }



return 0;
}
