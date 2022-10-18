#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double hip=2, cat1, cat2=1;
    scanf("%d", &n);
    while(hip<=n){
        cat1=1;
        while(cat1<hip){
        
            cat2=sqrt(((hip*hip)-(cat1*cat1)));
            if(cat2==(int)cat2 && cat2>cat1) printf("hipotenusa = %.0lf, catetos %.0lf e %.0lf\n", hip, cat1, cat2);

            cat1++;
        }
        hip++;
    }

    return 0;
}