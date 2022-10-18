#include <stdio.h>

int main() {
    int n, b0, b1, b2, b3, b4, b5, b6, b7;
    
    scanf("%d", &n);
    
    if(n<0 || n>255) {
        printf("Numero invalido!\n");
        return 0;
    }

    b0 = n%2;
    b1 = (n/2)%2;
    b2 = (n/2/2)%2;
    b3 = (n/2/2/2)%2;
    b4 = (n/2/2/2/2)%2;
    b5 = (n/2/2/2/2/2)%2;
    b6 = (n/2/2/2/2/2/2)%2;
    b7 = (n/2/2/2/2/2/2/2)%2;

    printf("%d%d%d%d%d%d%d%d\n", b7, b6, b5, b4, b3, b2, b1, b0);


    return 0;
}