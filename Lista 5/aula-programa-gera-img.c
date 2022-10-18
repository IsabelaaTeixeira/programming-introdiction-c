#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 100

void img_set(unsigned char M[][N], unsigned char bg);
void img_print(unsigned char M[][N], unsigned char max);
void draw_rect(unsigned char M[][N], unsigned char fg, int x, int y, int width, int height);

int main(){
    unsigned char A[N][N];
    unsigned char bg;
    unsigned char fg;
    // ai eu n vou saber te dar essa informação!!!!!!!!!!!!!!!!!!!!!!!!
    int cor, x, y, w, h;
    int nr;
    srand( time(0) );
    //printf("Entre com a cor de fundo: \n");
    //scanf("%d", &cor); bg=cor;
    bg=254;
    img_set(A, bg);

    //printf("Quantos retagulos??\n");
    //scanf("%d", &nr);
    nr = rand()%20 + 1;
    while(nr--){
        //printf("x, y, w, h: ");
        //scanf("%d%d%d%d%d",&cor, &x, &y, &w, &h);
        cor = rand()%256;
        x = rand()%N;
        y = rand()%N;
        w = rand()%(N/2) + 1;
        h = rand()%(N/2) + 1;

        draw_rect(A, (unsigned char)cor, x, y, w, h);

    }

    img_print(A, 255);

    return 0;
}

void img_set(unsigned char M[][N], unsigned char bg){
    int l, c;
    for(l=0; l<N; l++)  
        for(c=0; c<N; c++)
            M[l][c] = bg;
}

void img_print(unsigned char M[][N], unsigned char max){
    int l, c;
    printf("P2\n");
    printf("# Autor: Alunos de IP\n");
    printf("100 100\n");
    printf("%d\n", (int)max);
    for(l=0; l<N; l++){
        for(c=0; c<N; c++) printf("%d ", (int)M[l][c]);
        printf("\n");
    }
}

void draw_rect(unsigned char M[][N], unsigned char fg, int x, int y, int width, int height){
    int l, c;
    for(l=y; l<y+height; l++)
        for(c=x; c<x+width; c++) {
            if(l<0 || l>=N || c<0 || c>=N) continue;
            M[l][c] = fg;
        }



}

/* LINHA e COLUNA*/

/*MATRIZ TRANSPOSTA O QUE É LINHA VIRA COLUNA E O QUE É COLUNA VIRA LINHA*/