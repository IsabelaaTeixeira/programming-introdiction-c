#include <stdio.h>
 
int main(){
    int x, y, c;
    scanf("%d%d", &x, &y);
 
    if(x==((x/2)*2)){
        for(c=0; c<y; c++){
            printf("%d ", x);
            x=x+2;
        }
    } else {printf("O PRIMEIRO NUMERO NAO E PAR");}
    printf("\n");
 
    return 0;
}