

#include<stdio.h>
#include<stdlib.h>

int main(){

    int hora, hr;
    int minuto, min;

    printf("Digite a hora: ");
    scanf("%d", &hora);
    printf("os minutos: ");
    scanf("%d", &minuto);

    printf("\nDuracao em horas: ");
    scanf("%d", &hr);
    printf("em minutos: ");
    scanf("%d", &min);

    hora=(hora+hr+(minuto+min)/60)%24;
    minuto=(minuto+min)%60;

    printf("\nas horas sao: %02d:%02d\n\n",hora, minuto);









return 0;
}
