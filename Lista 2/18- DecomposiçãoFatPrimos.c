#include <stdio.h>

int main(){
    int numero, primo_talvez, divisor_primo, somatorio=0, verificador=0, primo_certeza;

    scanf("%d", &numero);
    while(numero<=1){
        printf("Fatoracao nao e possivel para o numero %d!\n", numero);
        scanf("%d", &numero);
    }
    printf("%d =", numero);
    
    for(primo_talvez=2; primo_talvez<=numero; primo_talvez++){
        somatorio=0;
        for(divisor_primo=1; divisor_primo<=primo_talvez; divisor_primo++){
            if(primo_talvez%divisor_primo==0){
                somatorio=somatorio+divisor_primo;
            }
            if(somatorio==primo_talvez+1){
                primo_certeza=primo_talvez;
            }
        }

        while(numero%primo_certeza==0){
            if(verificador!=0)printf(" x");
            printf(" %d", primo_certeza);
            verificador++;
            numero/=primo_certeza;
        }

    }

    printf("\n");

    return 0;
}