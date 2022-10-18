#include <stdio.h>
#include <stdlib.h>

int main(){

    double n, e, r=1, r1, rn, en=1;
    scanf("%lf %lf", &n, &e);


    while(en>e){
        rn=(r+(n/r))/2;
        en=(rn * rn) - n;
        if(en<0) -en;
        printf("r: %.9lf, err: %.9lf\n", rn, en);
        r=rn;
    }

    return 0;
}