#include<stdio.h>
#include<math.h>

int main () {
	float a, b, c, X1, X2, d, sqrd, xe;

	//printf("DIGITE OS NÚMEROS 'a', 'b' e 'c': \n");
	scanf("%f %f %f",  &a, &b, &c);

	d = (b*b) - (4*a*c);
	//printf("%f",d);
	sqrd = sqrt(d);
	X1 = (-b + sqrd) / (2*a);
	X2 = (-b - sqrd) / (2*a);


	if(d==0) {
		printf("RAIZ UNICA\n");
		printf("X1 = %.2f\n", X1);
	} 
	if(d<0) {
		printf("RAIZES IMAGINARIAS\n");
	} 
	if(d>0){
		if(X1>X2) {
		printf("RAIZES DISTINTAS\n");
		printf("X1 = %.2f\n", X2);
		printf("X2 = %.2f\n", X1);
		} else {
		printf("RAIZES DISTINTAS\n");
		printf("X1 = %.2f\n", X1);
		printf("X2 = %.2f\n", X2);
		}
	}
	
	return 0;
}
