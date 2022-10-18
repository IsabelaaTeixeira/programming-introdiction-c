#include <stdio.h>

#define N 10

int main(){
    int matriz[N][N];
    int L, C;
    int cont_l, l, c, contador;

    scanf("%d", &L);
    scanf("%d", &C);

    if(L>10 || L<1 || C>10 || C<1){
        printf("Dimensao invalida\n");
        return 0;
    }
    
    for(l=0; l<L; l++){
        for(c=0; c<C; c++){
            scanf("%d", &matriz[l][c]);
        }
    }
    l=0;
    contador=0;

    while(1){
        
        for(c=contador; c<C-contador; c++){
            printf("%d ", matriz[contador][c]);

            cont_l+=1;
        }

        if(cont_l==(L*C)) break;

        for(l=1+contador; l<L-contador; l++){
            printf("%d ", matriz[l][(C-1)-contador]);

            cont_l+=1;
        }

        if(cont_l==(L*C)) break;

        for(c=(C-2)-contador; c>=contador; c--){
            printf("%d ", matriz[(L-1)-contador][c]);

            cont_l+=1;
        }

        if(cont_l==(L*C)) break;

        for(l=(L-2)-contador; l>contador; l--){
            printf("%d ", matriz[l][contador]);

            cont_l+=1;
        }

        if(cont_l==(L*C)) break;

        contador++;
    }

    printf("\n");

    return 0;
}