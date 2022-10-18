#include <stdio.h>

int main(){
    int n, c, fat=1;

    scanf("%d", &n);
    for(c=1; c<=n; c++){
        fat=c*fat;
    }
    printf("%d! = %d\n", n, fat);

    return 0;
}