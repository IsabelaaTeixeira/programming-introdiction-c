#include <stdio.h>

int main(){
    double n1, n2, n3, n4;
    double ne, n0;

    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);

    if(n1>=n2) {
        ne=n1;
        n1=n2;
        n2=ne;
    } 

    if(n1>=n3) {
        ne=n1;
        n1=n3;
        n3=ne;
    } 

    if(n2>=n3) {
        ne=n2;
        n2=n3;
        n3=ne;
    } 

    if(n1>=n4) {
        ne=n1;
        n1=n4;
        n4=ne;
    } 

    if(n2>=n4) {
        ne=n2;
        n2=n4;
        n4=ne;
    } 

    if(n3>=n4) {
        ne=n3;
        n3=n4;
        n4=ne;
    } 

    printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n1, n2, n3, n4);

    return 0;
}