#include <stdio.h>

int main(){
    int qtd, c, n1, n2, seg=1, segM=1;
    scanf("%d", &qtd);

    for(c=0; c<qtd; c++){
        scanf("%d", &n1);
        
        if(n1>n2 && c!=0){
            seg=seg+1;
            if(seg>segM){
            segM=seg;
            }
        } else {seg=1;}
        n2=n1;
    }
    printf("O comprimento do segmento crescente maximo e: %d\n", segM);

    return 0;
}