#include <stdio.h>

int main(){
    int qtd, c, num1, num2, u1, d1, c1, u2, c2, d2, num1_b, num2_b;
    scanf("%d", &qtd);
    for(c=0; c<qtd; c++){
        scanf("%d %d", &num1, &num2);
        
        c1=(num1/10/10)%10;
        d1=(num1/10)%10;
        u1=num1%10;

        c2=(num2/10/10)%10;
        d2=(num2/10)%10;
        u2=num2%10;

        num1_b=u1*100+d1*10+c1;
        num2_b=u2*100+d2*10+c2;

        if(num1_b>num2_b){
            printf("%d\n", num1_b);
        } else {printf("%d\n",num2_b);}        
    }

    

    return 0;
}