#include <stdio.h>


int main(){
    int mat[2][2];
    int c, j;
    double determinante;

    for(c=0; c<2; c++){
        for(j=0; j<2; j++){
            scanf("%d", &mat[c][j]);
        }
    }
    determinante=(mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]);
    

    printf("%.2lf\n", determinante);

    return 0;
}

