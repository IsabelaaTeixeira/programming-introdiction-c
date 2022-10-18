#include <stdio.h>
#define N 100000

void taNaota(int qtd, int tamanho, int v[N]);

int main(){
    int v[N];
    int tamanho_real, c=0, buscas;
    scanf("%d", &tamanho_real);
    
    while(c<tamanho_real){
        scanf("%d", &v[c]);
        c++;
    }
    scanf("%d", &buscas);
    taNaota(buscas, tamanho_real, v);


    return 0;
}

void taNaota(int qtd, int tamanho, int v[]){
    int c=0, i, valorNovo, yep;
    while(c<qtd){
        i=0;
        yep=0;
        scanf("%d", &valorNovo);
        while(i<tamanho){
            if(valorNovo==v[i]) {
                printf("ACHEI\n");
                yep++;
                break;
            }
            i++;
        }
        if(yep==0) printf("NAO ACHEI\n");
        c++;
    }


}