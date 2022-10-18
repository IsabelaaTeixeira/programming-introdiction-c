#include <stdio.h>
#include <math.h>

/**
 * @brief função que caulcula as raizes de uma equação de grau 2
 * @param a: coeficiente quadrado
 * @param b: coeficiente linear
 * @param c: coeficiente constante
 * @param x1: ponteiro para a primeira raiz
 * @param x2: ponteiro para a segunda raiz
 * @return 1 para raiz unica; 
 *         2 para raizes distintas; 
 *         0 para raizes imaginarias;
 *         -1 para coeficientes invalidos;
 */
int raizesEq2Grau(double a, double b, double c, double *px1, double *px2);

int main() {
    double a, b, c;
    double x1, x2, aux;
    int r;

    scanf("%lf%lf%lf", &a, &b, &c);
    r = raizesEq2Grau(a, b, c, &x1, &x2);

    if(r==1){
        printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
    } else if(r==2){
        printf("RAIZES DISTINTAS\n");
        if(x1>x2){
            aux=x1;
            x1=x2;
            x2=aux;
        }
        printf("X1 = %.2lf\nX2 = %.2lf\n", x1, x2);
    } else {printf("RAIZES IMAGINARIAS\n");}
    return 0;
}

int raizesEq2Grau(double a, double b, double c, double *px1, double *px2) {
    double delta = b*b - 4*a*c;
    if(a==0){
        if(b!=0){
            *px1=-c/b;
            return 1;
        } else {return -1;}
    }
    
    if(delta==0){
        *px1=-b/(2*a);
        return 1;
    } else if(delta>0){
        *px1=(-b+sqrt(delta))/(2*a);
        *px2=(-b-sqrt(delta))/(2*a);
        return 2;
    } else {return 0;}
}