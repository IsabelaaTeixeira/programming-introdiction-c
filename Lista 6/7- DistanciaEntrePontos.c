#include <stdio.h>
#include <math.h>
 
typedef struct {
    double u, x, y, z;
} Ponto;
 
int main(){
    int num_pontos;
    int c;
    double distancia;
    Ponto a, b;
 
    scanf("%d", &num_pontos);
    scanf("%lf%lf%lf%lf", &a.u, &a.x, &a.y, &a.z);
    for(c=0; c<num_pontos-1; c++){
        scanf("%lf%lf%lf%lf", &b.u, &b.x, &b.y, &b.z);
        distancia=sqrt(pow((a.u-b.u), 2) + pow((a.x-b.x), 2) + pow((a.y-b.y), 2) + pow((a.z-b.z), 2));
 
        printf("%.2lf\n", distancia);
        a=b;
    }
 
 
    return 0;
}