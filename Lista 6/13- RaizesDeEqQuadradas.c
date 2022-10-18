#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    double real, imaginaria;
} Complex;

typedef struct{
    Complex x1, x2;
} RaizEqu2;

/**
* Função que calula as raízes de uma equação de segundo grau.
*
* @param a coeficiente quadrado
* @param b coeficiente linear
* @param c constante
* @return retorna uma estrutura RaizEqu2 com dois números complexos
*/
struct RaizEqu2 calcula_raiz_equ_2( float a, float b, float c);

/**
* Imprime numeros complexos na saída padrão do sistema. A impressão segue o formato
* a + bi, onde a é a parte real e b a imaginária. Os valores são apresentados
* somente se forem diferente de zero. No caso de a e b forem zero, o valor 0 é
* apresentado. Se o valor de b for 1 ou -1, somente o caracter i ou -i é
apresentado.
*
* @param c Numero complexo a ser impresso.
*/
void complex_print(Complex c);

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
int raizesEq2Grau(double a, double b, double c, RaizEqu2 *x);

int main() {
    double a, b, c, aux;
    RaizEqu2 x, aux1;
    int r;

    scanf("%lf%lf%lf", &a, &b, &c);
    r = raizesEq2Grau(a, b, c, &x);

    if(r==1){
        printf("RAIZ UNICA\nX1 = %.2lf\n", x.x1.real);
    } else if(r==2){
        printf("RAIZES DISTINTAS\n");
        if(x.x1.real>x.x2.real){
            aux=x.x1.real;
            x.x1.real=x.x2.real;
            x.x2.real=aux;
        }
        printf("X1 = %.2lf\nX2 = %.2lf\n", x.x1.real, x.x2.real);
    } else {
        printf("RAIZES IMAGINARIAS\n");
        if(x.x1.real>x.x2.real){
            aux=x.x1.real;
            x.x1.real=x.x2.real;
            x.x2.real=aux;
        }
        printf("X1 = %.2lfi\nX2 = %.2lfi\n", x.x1.real+x.x1.imaginaria, x.x2.real+x.x1.imaginaria);
        }
    return 0;
}

int raizesEq2Grau(double a, double b, double c, RaizEqu2 *x) {
    double delta = b*b - 4*a*c;
    if(a==0){
        if(b!=0){
            x->x1.real=-c/b;
            return 1;
        } else {return -1;}
    }
    
    if(delta==0){
        x->x1.real=-b/(2*a);
        return 1;
    } else if(delta>0){
        x->x1.real=(-b+sqrt(delta))/(2*a);
        x->x2.real=(-b-sqrt(delta))/(2*a);
        return 2;
    } else if(delta<0){
        delta=-delta;
        x->x1.real=(-b+sqrt(delta))/(2*a);
        x->x1.imaginaria=(+1)/(2*a);
        x->x2.real=(-b-sqrt(delta))/(2*a);
        x->x2.imaginaria=(+1)/(2*a);
        return 0;
    }
}