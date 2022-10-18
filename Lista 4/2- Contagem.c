#include <stdio.h>
#define N 1000

int main(){
    int n, c, k, maiores=0;
    int v[N];

    while(n<1 || n>1000) scanf("%d", &n);
    for(c=0; c<n; c++) scanf("%d", &v[c]);
    scanf("%d", &k);
    for(c=0; c<n; c++)if(v[c]>=k) maiores++;
    printf("%d\n", maiores);

    return 0;
}