#include <stdio.h>

int main(){
    int v[5000];
    int n, c;

    scanf("%d", &n);
    for(c=0; c<n; c++) scanf("%d", &v[c]);
    for(n; n>0; n--) {
        printf("%d ", v[n-1]);
        if(n==1) printf("\n");
    }
    return 0;
}