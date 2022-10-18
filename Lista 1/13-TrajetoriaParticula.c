#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c; 
    double X1, X2, d, sqrd, xe;

    scanf("%d%d%d", &a, &b, &c);

	d = (b*b) - (4*a*c);
	sqrd = sqrt(d);
	X1 = (-b + sqrd) / (2*a);
	X2 = (-b - sqrd) / (2*a);

    if(d<0) {
        printf("POSICOES IMAGINARIAS");
        return 0;
    } else {
        printf("POSICOES: X1=%.2lf e X2=%.2lf ", X1, X2);
        if(X1<=-5 || X1>=5 || X2<=-5 || X2>=5) {
            printf("(FORA DO EXPERIMENTO)\n");
        }
        if((a+b+c)%3==0) {
            printf("\nFATO1: DESAPARECIDA");
        }
        if(c%2==0 && c<(a+b)){
            printf("\nFATO2: ORIGEM\n");
        }
        }

    return 0;
}