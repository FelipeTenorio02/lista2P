
#include<stdio.h>
#include<stdlib.h>

int inverte_inteiro(int n){
    int res=0;
    while(n!=0){
        res = res*10 + n%10;
        n/=10;
    }
return res;
}

int verifica_palindromo(int n){
    return n == inverte_inteiro(n);
}


int main(){
    int a, b;
    int c1;

    printf("Digite o inicio do intervalo: ");
    scanf("%d", &a);

    printf("Digite o fim do intervalo: ");
    scanf("%d", &b);

    for(c1=a; c1<=b; c1++){
        if(verifica_palindromo(c1)){
            printf("%d\n", c1);
        }
    }


return 0;
}
