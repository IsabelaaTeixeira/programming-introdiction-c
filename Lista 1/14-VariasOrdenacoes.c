#include <stdio.h>

int main(){
    int i;
    double a, b, c, ne;

    scanf("%d%lf%lf%lf", &i, &a, &b, &c);

    if(a>=b) {
		ne=a;
		a=b;
		b=ne;
	} 

	if(a>=c) {
		ne=a;
		a=c;
		c=ne;
	} 

	if(b>=c) {
		ne=b;
		b=c;
		c=ne;
	}

    switch(i){
        case 1:
            printf("%.2lf %.2lf %.2lf\n", a, b, c); break;
        case 2:
            printf("%.2lf %.2lf %.2lf\n", c, b, a); break;
        case 3:
            printf("%.2lf %.2lf %.2lf\n", b, c, a); break;
    }

    return 0;
}