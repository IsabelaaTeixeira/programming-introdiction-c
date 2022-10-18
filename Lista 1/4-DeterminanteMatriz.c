#include<stdio.h>

int main(){
	float a, b, c, d, X;

	scanf("%f%f%f%f", &a, &b, &c, &d);

	X = a*d - b*c;

	printf("O VALOR DO DETERMINANTE E = %.2f\n", X);

return 0;
}
