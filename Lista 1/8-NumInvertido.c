#include <stdio.h>

int main() {
    int n, n1, n2, n3;
    int N;

    scanf("%d", &n);
    
    n3 = n%10;
    n2 = (n/10)%10;
    n1 = (n/10)/10;

    N = n3*100 + n2*10 + n1*1;

    printf("%.3d\n", N);

    return 0;
}