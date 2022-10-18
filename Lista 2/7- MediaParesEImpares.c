#include <stdio.h>

int main(){
    int n, sp, si, par, impar; 
    double mp, mi;

    sp = 0;
    si = 0;
    par = 0;
    impar = 0;

    while(1){
        scanf("%d", &n);
        if (n==0) break;
        if (n % 2 == 0) {
            sp+=n;
            par++;
        } else if(n % 2 != 0){
            si+=n;
            impar++;
        }
    }
    
    mp = 0.0;
    mi = 0.0;


    if (par != 0) mp=sp/(par*1.0);
    if (impar != 0) mi=si/(impar*1.0);

    printf("MEDIA PAR: %lf\n", mp);
    printf("MEDIA IMPAR: %lf\n", mi);
    
    return 0;
}