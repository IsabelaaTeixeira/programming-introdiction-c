#include<stdio.h>

int main () {
    int n1, n2, n3, N, N1;

    scanf("%d%d%d", &n1, &n2, &n3);

    N = n1*100+n2*10+n3;
    N1 = N*N;

    if(n1>9 || n2>9 || n3>9) {
        printf("DIGITO INVALIDO\n");
    }
    else {
        printf("%d, %d\n", N, N1);
    }

    return 0;
}
