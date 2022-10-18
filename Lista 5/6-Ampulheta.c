#include <stdio.h>

int main(){
    int matriz[6][6];
    int l, c;
    int soma, maior=-100;

    for(l=0; l<6; l++){
        for(c=0; c<6; c++){
            scanf("%d", &matriz[l][c]);
        }
    }

    for(l=1; l<5; l++){
        for(c=1; c<5; c++){
            soma=matriz[l][c]+matriz[l-1][c]+matriz[l-1][c-1]+matriz[l-1][c+1]+matriz[l+1][c]+matriz[l+1][c-1]+matriz[l+1][c+1];
            if(soma>maior) maior=soma;
        }
    }

    printf("%d\n", maior);

    return 0;
}