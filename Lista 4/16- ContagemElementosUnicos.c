#include <stdio.h>

int main(){
    int qtd_elementos, igual, unico;
    int c, c1;
    int v[100000];

    scanf("%d", &qtd_elementos);

    for(c=0; c<qtd_elementos; c++)scanf("%d", &v[c]);

    for(c=0; c<qtd_elementos; c++){
        igual=0;
        for(c1=0; c1<qtd_elementos; c1++){
            if(v[c]==v[c1]) igual++;
        }
        if(igual<2) unico++;
    }

    printf("%d\n", unico);

    return 0;
}