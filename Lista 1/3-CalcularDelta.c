#include<stdio.h>

int main() {
	
	float A, B, C, X;

	scanf("%f%f%f", &A, &B, &C);

	X = B*B - 4*A*C;

	printf("O VALOR DE DELTA E = %0.2f \n", X);

return 0;

}
