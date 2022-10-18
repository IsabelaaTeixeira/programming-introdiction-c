#include <stdio.h>

int main(){
    int n, c, mult, soma=0;
    scanf("%d", &n);
    printf("%d =", n);

    for(c=1; c<n; c++){
        mult=n%c;
        if(mult==0){
            if(c!=1)printf(" +");
            printf(" %d", c);
            soma+=c;
        }

    }
    if(soma==n){
        printf(" = %d (NUMERO PERFEITO)\n", soma);
    } else {printf(" = %d (NUMERO NAO E PERFEITO)\n", soma);}
    
    return 0;
}