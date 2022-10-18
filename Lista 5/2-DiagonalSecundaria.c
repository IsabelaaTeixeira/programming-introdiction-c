#include <stdio.h>
#define L 1000
#define C 1000

int main(){
    int l, c;
    int mat[L][C];
    int ordem_da_matriz;

    scanf("%d", &ordem_da_matriz);

    for(l=0; l<ordem_da_matriz; l++){
        for(c=0; c<ordem_da_matriz; c++){
            scanf("%d", &mat[l][c]);
        }
    }
    c--;

    for(l=0; l<ordem_da_matriz; l++){
        printf("%d\n", mat[l][c]);
        c--;
    }

    return 0;
}