#include <stdio.h>
/**
 * @brief A função calcula a soma dos divisores de um número
 * 
 * @param num1 número que terá a soma de seus divisores calculados
 * @return soma dos divisores do número
 */
int soma_divisores(int num1);
int main(){
    int qtd; 
    int num1=1, soma1=0, r1=0;
    int num2, soma2=0;

    scanf("%d", &qtd);

    while(r1<qtd){
        soma1 = soma_divisores(num1);
        soma2 = soma_divisores(soma1);

        if(soma2==num1 && num1!=soma1){
            num2=soma1;
            printf("(%d,%d)\n", num1, num2);
            r1++;
            num1=soma1;
        }

        num1++;
    }
    

    return 0;
}

int soma_divisores(int num1){
    int soma=0, divisores;
    
    for(divisores=1; divisores<(num1-1); divisores++){

        if(num1%divisores==0){
            soma+=divisores;
        }
    }
    return soma;
}