#include <stdio.h>

/**
 * @brief Funcao que calcula os interceptos de uma reta nos eixos X e Y de um Plano Cartesiano e verifica a qual eixo ela e paralela. 
 * A reta é definida pela equação parametrica: ax+by+c = 0 de forma que a, b, e c sao os coeficientes da equacao
 * 
 * @param a Coeficiente linear em x
 * @param b Coeficiente linear em y
 * @param c Coeficiente constante
 * @param x variavel x
 * @param y variavel y
 * @return 0 quando a reta nao e parelela a nenhum eixo, 1 quando a reta e paralela ao eixo X, 2 quando a reta e paralela ao eixo Y, 0 caso contrario e -1 caso seja uma reta inválida
 */
int intercepto( double a, double b, double c, double *x, double *y);

int main(){
    int contador;
    double N, r, a, b, c, Ix, Iy;

    scanf("%lf", &N);
    for(contador=0; contador<N; contador++){
        scanf("%lf %lf %lf", &a, &b, &c);
        r=intercepto(a, b, c, &Ix, &Iy);
        if(r==0)printf("NAO PARALELA\nIntercepto em X: (%.2lf, 0.00)\nIntercepto em Y: (0.00, %.2lf)\n", Ix, Iy);
        
        if(r==1) printf("PARALELA AO EIXO X\nIntercepto em Y: (0.00, %.2lf)\n", Iy);

        if(r==2) printf("PARALELA AO EIXO Y\nIntercepto em X: (%.2lf, 0.00)\n", Ix);

        if(r==-1) printf("RETA INVALIDA\n");
    }



    return 0;
}

int intercepto( double a, double b, double c, double *x, double *y){

    if(a!=0 && b!=0) {
        *x=-c/a;
        *y=-c/b;
        return 0;
    }
    if(a==0 && b!=0) {
        *y=-c/b;
        return 1;
    }
    if(a!=0 && b==0) {
        *x=-c/a;
        return 2;
    }
    if(a==0 && b==0) return -1;

}