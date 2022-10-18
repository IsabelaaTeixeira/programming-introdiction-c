#include <stdio.h>
 
int main(){
    int n, c;
    double S=0;
    scanf("%d", &n);
 
    if(n<=0) printf("Numero invalido!");
    else {
        for(c=1; c<=n; c++){
            S+=1.0/c;
        }
        printf("%.6lf\n", S);
    }
 
    return 0;
}