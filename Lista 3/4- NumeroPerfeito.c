#include <stdio.h>

/**
 * @brief descobre os divisores de um número e retorna a soma destes
 * 
 * @param num numero que terá seus divisores somados
 * @return retorna a soma dos divisores
 */
int somaDivisores(int num);

int main(){
    int num, soma;
    scanf("%d", &num);
    printf("%d =", num);
    somaDivisores(num);

    return 0;    
}

int somaDivisores(int num){
    int divisores, v=0, soma=0;
    
    for(divisores=1; divisores<num; divisores++){
        if(num%divisores==0){
            if(v>=1)printf(" +");
            printf(" %d", divisores);
            v++;
            soma+=divisores;
        }
    }
    if(num==soma){
        printf(" = %d", soma);
        printf(" (NUMERO PERFEITO)\n");
    } else {
        printf(" = %d", soma);
        printf(" (NUMERO NAO E PERFEITO)\n");
    }
    return soma;
}