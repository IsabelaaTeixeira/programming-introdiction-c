#include <stdio.h>

#define LC 99

int main(){
    char losango[LC][LC]={0};
    int ordem, o;
    int l, l1, c;
    char meio, borda;

    scanf("%d %c %c", &ordem, &borda, &meio);

    if(ordem%2==0){
        printf("Dimensao invalida!\n");
        return 0;
    }

    o=ordem-1;
    l1=0;

    for(l=0; l<ordem; l++){
        for(c=0; c<ordem; c++){
            if(l==0 || l==o){
                if(c==(ordem/2)) losango[l][c]=borda;
                else losango[l][c]=' ';
            }else if(l==0+l || l==o-l){
                if(c==(ordem/2)-l1 || c==(ordem/2)+l1) losango[l][c]=borda;
                else if(c<=(ordem/2)+(l1-1) && c>=(ordem/2)-(l1-1))losango[l][c]=meio;
                else losango[l][c]=' ';
            }
        }
        if(l<(ordem/2)) l1++;
        else l1--;
    }
    
    for(l=0; l<ordem; l++){
        for(c=0; c<ordem; c++){
            printf("%c ", losango[l][c]);
        }
        printf("\n");
    }

    return 0;
}