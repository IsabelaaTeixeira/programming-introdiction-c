#include <stdio.h>
 
int main (){
    int n;
    int c;
    double F, C;
    
    scanf("%d", &n);
 
    for(c=0;c<n;c++){
        scanf("%lf", &F);
        C=(5*(F-32))/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", F, C);
    }
 
    return 0;
}